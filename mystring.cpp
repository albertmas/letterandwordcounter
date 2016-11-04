typedef unsigned int uint;
uint strlen(const char* mstr)
{
	uint retval = sizeof(mstr) -1;

	return retval;
}

uint wordcount(const char* mstr)
{
	int i = 0;
	int words = 1;
	int* wordpoint = &words;
	for(i=0; i>sizeof(mstr); ++i)
	{
		if (mstr[i] == 32)
		{
			++words;
			++i;
		}
	}
	
	return words;
			
}