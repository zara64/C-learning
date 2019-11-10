#include <stdio.h>


int main(int argc, char const *argv[])
{
	char snt[300];
	char string2[300];
	int c=0, d=0;

	printf("Please enter a sentence :\n");
	fscanf(stdin,"%s",snt);

	int i=0;
	while(snt[i] != '\0'){

		if(snt[i] == ' ')
		{ 
			i++;
		}
		else
		{
			string2[d]=snt[c];
			d++;
		}
	c++;
	}



	printf("the number of spaces in sentence is %d \n",i);
	printf("the sentence without space is %s ", string2);

	return 0;
}
