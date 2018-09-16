/* -*- C++ -*-

	hCommandDefines.h : hCommand constant and definitions

*/
#ifndef	_H_COMMAND_DEFINES
#define _H_COMMAND_DEFINES

/*
	version code definition

	v. aabbccc = v. a.b.c
	_____________________________________________
	| main version	|  sub version	|  build	|
	|---------------|---------------|-----------|
	|      a		|		b 		|	  c 	|
	|_______________|_______________|___________|

	string(VERSION_CODE) = (VERSION_CODE / 100000).(VERSION_CODE / 1000 % 100).(VERSION_CODE % 1000) 

*/
#define VERSION_CODE	1
#define BUILD_CODE		1

enum STAT_CODE
{
	ORDINARY,
	EXIT
};

#endif