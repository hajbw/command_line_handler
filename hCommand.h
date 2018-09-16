/* -*- C++ -*-

	hCommand : hCommand and hCommandHandler definitions

*/

#ifndef _H_COMMAND
#define _H_COMMAND

#include <set>

#include "hCommandDefines.h"

class hCommand
{
	char *name;
public:

	hCommand();
	~hCommand();

};

class hCommandHandler
{

public:

	hCommandHandler();
	~hCommandHandler();

	bool addCommand(hCommand *command);

	STAT_CODE exec(int argc,char const **argv);

};

#endif