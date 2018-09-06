/* -*- C++ -*-

	hCommandDefines.h : hCommand constant and definitions

*/

#define _H_COMMAND_DEFINES 1

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

typedef int STAT_CODE;

#define ORDINARY_RETURN	0
#define EXIT_SHELL		1

