#include <ctype.h>

typedef unsigned int uint;
uint strlen(const char* mstr)
{
	uint retval = sizeof(mstr) - 1;

	return retval;
}

uint wordcount(const char* mstr)
{
	int i = 0;
	int words = 1;
	char c;

	while (mstr[i]){
		c = mstr[i];
		if (isspace(c)){
			words++;
		}
		i++;
	}
	return words;
}

uint uppercount(const char* mstr)
{
	int i = 0;
	int upletters = 0;
	char c;

	while (mstr[i]){
		c = mstr[i];
		if (isupper(c)){
			upletters++;
		}
		i++;
	}

	return upletters;
}
