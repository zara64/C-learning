#include <stdio.h>

char* stringCopy(char* s1, char*s2)
{
	int count=0;

	while(s2[count] != '\0')
	{
		s1[count]=s2[count];
		count++;
	}

	return s1;
}

int main(int argc, char const *argv[])
{
	char source[300];
	char dest[300];
	printf("Please enter the string you want to copy there :\n");
	fgets(dest,300,stdin);

	printf("Please enter the string you want to be copied :\n");
	fgets(source,300,stdin);

	//char result[300];
	//result = ;
	printf("the result is %s \n",stringCopy(dest,source));

	return 0;
}
