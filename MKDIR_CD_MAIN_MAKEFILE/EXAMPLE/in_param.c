#include "std.h"

int in_param(int argc, char** argv)
{
	if(argc<=1)
	{
		printf("\n\t%s requires more parameters.\n"
			"\tSee '--help' for more information.\n");
	}
	else if(!strcmp(argv[1], "--help"))
	{
		print_help(argv);
	}
	/*else if(!strcmp(argv[1], ))
	{
			return 1;
	}
	*/
	else
	{
		printf("\n\tUnknown parameter.\n\t"
			"See '--help' for more information.\n");
	}
	return 0;
}

