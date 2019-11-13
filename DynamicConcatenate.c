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

char* strConcatenate(char* str1,char* str2 )
{
	char *str3; 
	int i=0;

	int len1 = stringLen(str1);
	int len2 = stringLen(str2);
	int len3 = len1+len2+1;
	str3 = malloc(len3);

	while( *str1 != '\n' ){
		str3[i] = *str1;
		str1++;
		i++;
	}

	while( *str2 != '\n'){
		str3[i] = *str2;
		str2++;
		i++;
	}

	str3[i]='\0';
	return str3;
}


int main(int argc, char const *argv[])
{

	char str1[300],str2[300];

	printf("Please enter your first string :\n");
	fgets(str1,300,stdin);

	printf("Please enter your second string :\n");
	fgets(str2,300,stdin);

	char* str=strConcatenate(str1,str2);
	printf("The result of concatenation of first and second string is %s\n", str );

	free(str);

	return 0;
}
