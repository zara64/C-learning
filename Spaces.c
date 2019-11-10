#include <stdio.h>

char * noSpace(char string1[300])
{
	char string2[300];
	int c=0, d=0;
	while (string1[c] != '\0')
	{
		if(string1[c] != ' ')
		{
			string2[d]=string1[c];
			d++;
		}
		
	c++;

	}
	return &string2;
}
int main(int argc, char const *argv[])
{
	char snt[300];
	printf("Please enter a sentence :\n");
	fscanf(stdin,"%s",snt);
	int i=0;
	while(snt[i] != '\0'){
		if(snt[i] == ' ');
		i++;
		//snt[i]='';
	}

	char *ptrn = noSpace(snt);

	printf("the number of spaces in sentence is %d \n",i);
	printf("the sentence without space is %s ", ptrn);

	return 0;
}
