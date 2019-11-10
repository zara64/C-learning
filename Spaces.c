#include <stdio.h>


int main()
{
	char snt[300],string2[300];
	int c=0;
	int d=0;
	int i=0;

	printf("Please enter a sentence :\n");
	fgets(snt,300,stdin);

	printf("%s\n",snt);

	while(snt[c] != '\0'){

		if(snt[c] == ' ')
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
	printf("the sentence without space is %s \n", string2);

	return 0;
}
