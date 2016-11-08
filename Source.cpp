#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main()
{
	int print1, print2;

	char example[] = "HeLlO WoRlD eArTh";

	print1 = strlen(example);
	print2 = wordcount(example);
	print3 = uppercount(example);
	printf("There are %d letters\n", print1);
	printf_s("There are %d words\n", print2);
	printf_s("There are %d upper case letters\n", print3);

	getchar();
	return 0;
}
