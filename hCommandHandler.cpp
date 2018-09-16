/* -*- C++ -*-

	hCommandHandler.cpp

*/

#include "hCommand.h"

hCommandHandler::hCommandHandler()
{

}

hCommandHandler::~hCommandHandler()
{

}

bool hCommandHandler::addCommand(hCommand &command)
{
	return commands.insert(std::make_pair(command.name(),command)).second;
}

STAT_CODE hCommandHandler::exec(int argc,char const **argv)
{
	map<string,hCommand>::iterator it = commands.find(string(argv[0]));

	if(it == commands.end())
		return STAT_CODE::COMMAND_UNDEFINED;

	return it->second.exec(argc,argv);
}