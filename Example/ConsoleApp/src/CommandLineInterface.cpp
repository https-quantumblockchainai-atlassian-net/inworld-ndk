/**
 * Copyright 2023-2024 Theai, Inc. dba Inworld AI
 *
 * Use of this source code is governed by the Inworld.ai Software Development Kit License Agreement
 * that can be found in the LICENSE.md file or at https://www.inworld.ai/sdk-license
 */

#include "CommandLineInterface.h"
#include "Utils/Log.h"

#include <sstream>

void NDKApp::CommandLineInterface::SetCommands(const std::vector<ConsoleCommand>& Commands)
{
	_Commands = Commands;
	_Commands.push_back({
			"help",
			"show all commands",
			[this](const std::vector<std::string>& Args)
			{
				for (auto& Command : _Commands)
				{
					Inworld::Log("%s - %s", Command._Id.c_str(), Command._Desc.c_str());
				}
			}
		});
}

void NDKApp::CommandLineInterface::Run()
{
	_AsyncReadKeys.Start("CommandLineInterface", std::make_unique<RunnableReadKeyboard>(_Messages));
}

void NDKApp::CommandLineInterface::Stop()
{
	_AsyncReadKeys.Stop();
}

void NDKApp::CommandLineInterface::ExecuteCommands()
{
	std::string Msg;
	while (_Messages.PopFront(Msg))
	{
		std::stringstream Stream(Msg);

		std::string CmdName;
		std::getline(Stream, CmdName, ' ');

		if (CmdName.empty() || CmdName[0] != '/')
		{
			Inworld::Log("Invalid command: %s", CmdName.c_str());
			continue;
		}

		CmdName.erase(0, 1);

		auto It = std::find_if(_Commands.begin(), _Commands.end(), [&CmdName](const ConsoleCommand& C) { 
			return std::equal(CmdName.begin(), CmdName.end(),
				C._Id.begin(), C._Id.end(),
				[](char a, char b) {
					return tolower(a) == tolower(b);
				}); });

		if (It == _Commands.end())
		{
			Inworld::Log("Invalid command: %s", CmdName.c_str());
			continue;
		}

		std::vector<std::string> Args;
		std::string Tmp;

		while (std::getline(Stream, Tmp, ' '))
		{
			Args.push_back(Tmp);
		}

		It->_Task(Args);
	}
}
