/* -*- C++ -*-

	hCommand : hCommand and hCommandHandler definitions

*/

#ifndef _H_COMMAND
#define _H_COMMAND

#include <map>
#include <string>
#include <utility>

#include "hCommandDefines.h"

using std::map;
using std::pair;
using std::string;

class hCommand
{
	string name_;
public:

	hCommand();
	~hCommand();

	string& name();

	STAT_CODE exec(int argc,char const **argv);

};

class hCommandHandler
{
	map<std::string,hCommand> commands;

public:

	hCommandHandler();
	~hCommandHandler();

	bool addCommand(hCommand &command);

	STAT_CODE exec(int argc,char const **argv);

};

#endif