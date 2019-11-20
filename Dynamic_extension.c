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

char* extension(char* str1,char* str2)
{
	int len1=stringLen(str1);
	int len2=stringLen(str2);

	char* prt=(char*)malloc((len1+len2)*sizeof(char));
	ptr=str1;
	
	for (int i = 0; i < len2; ++i)
	{
		ptr[len1+i]=str[i];
	}

	for (int i = 0; i < len1+len2; ++i) { 
         printf("%d, ", ptr[i]); 
     }

    return(ptr);
	free(ptr);

}
int main(int argc, char const *argv[])
{
	char* str1[200],str2[200];

	printf("Please enter your first string\n");
	fgets(str1,200,stdin);

	printf("Please enter your second string\n");
	fgets(str2,200,stdin);

	char* str=extension(str1,str2);

	printf("%s\n",str );
	return 0;
}
