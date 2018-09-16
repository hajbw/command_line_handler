/* -*- C++ -*-

	hCommand.cpp : hCommand.h implenments

*/

#include "hCommand.h"

hCommand::hCommand()
{

}

hCommand::~hCommand()
{

}

string& hCommand::name()
{
	return name_;
}

STAT_CODE hCommand::exec(int argc,char const **argv)
{

}