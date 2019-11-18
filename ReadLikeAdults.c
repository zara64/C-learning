#include <stdio.h>
#include <stdlib.h>

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

	int bufSize=50;
	int length=0;
	char* str= (char*)malloc(bufSize*sizeof(char));
	printf("Please enter your string:\n");
	fgets(str,bufSize,stdin);
	



	while( str[stringLen(str)] != '\n')
	{
		str=realloc(str,bufSize*sizeof(char));
		fgets(str,bufSize,stdin);
		
	}


	printf("The output is %s and its length is %d\n",str,stringLen(str));
	
	
	return 0;
}
