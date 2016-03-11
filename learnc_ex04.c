#include <stdio.h>

/* this program is wrong on purpose */

int main()
{
	int age = 10;
	int height;

	printf("I am %d years old.\n"); /* no variable specified for printf %d */
	printf("I am %d inches tall.\n", height); /* height not initialized */

	return 0;
}
