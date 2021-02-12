#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

#include "print_help.h"

int in_param(int argc, char** argv)
{
	if(argc<=1)
	{
		printf("\n\t%s requires more parameters.\n"
			"\tSee '--help' for more information.");
	}
	else if(!strcmp(argv[1], "--help"))
	{
		print_help(argv[0]);
	}
	else if(!strcmp(argv[1], ))
	{
			return 1;
	}
	else
	{
		printf("\n\tUnknown parameter.\n\t"
			"See '--help' for more information.");
	}
	return 0;
}

