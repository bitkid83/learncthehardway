#include <stdio.h>

/* this is a comment */
int main(int argc, char *argv[])
{
	int distance = 100;
	int arg_count = argc >= 0 ? argc : 0;
	//if (argc >= 0) { arg_count = argc; } else arg_count = 0;

	// this is also a comment
	printf("You are %d miles away.\n", distance);
	printf("Arg count: %d\n", arg_count);

	int i = 0;
	for (i = 0; i < arg_count; i++) {
		printf("arg %d: %s\n", i, argv[i]);	
	}

	return 0;
}
