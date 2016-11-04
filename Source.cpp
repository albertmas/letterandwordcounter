#include <stdio.h>
#include <string.h>
#include "mystring.h"

int main()
{
	int print1, print2;

	char example[] = "hello world";

	print1 = strlen(example);
	print2 = wordcount(example);
	printf("There are %d letters\n", print1);
	printf_s("There are %d words", print2);

	getchar();
	return 0;
}