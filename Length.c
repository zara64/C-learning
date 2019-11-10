#include <stdio.h>
int stringLen(char* s)
{
	int count=0;

	while(s[count] != '\0')
	{
		count++;
	}

	return count-1;
}

int main(int argc, char const *argv[])
{
	char string[300];
	printf("Please enter your string :\n");
	fgets(string,300,stdin);
	int result=stringLen(string);
	printf("the length of your string is %d\n", result );

	return 0;
}
