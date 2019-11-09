#include <stdio.h>
#include <stdlib.h>



/*int main(int argc, char const *argv[])
{
	int c;

	if (argc==3)
	{
		c = atoi(argv[1])+atoi(argv[2]);
		printf("the sum of numbers is equal to %d \n", c);
		//printf("the sum of %s and %s is equal to %d\n",argv[1], argv[2],c );
	}
	else
	{
		printf("there is an error\n");
	}
	

	return 0;
}*/
int main(int argc, char const *argv[])
{
	printf("Please enter to number to sum up.\n");
	double result=0;

	if (argc != 3)
	{
		printf("You should provide to numbers to sum up!\n");
	}

	for (int i = 1; i < argc; ++i)
	{
		result += atio(argv[i]);
	}

	printf("The result for adding number %3.3lf and %3.3lf is equal to %3.3lf\n",argv[1],argv[2],result );
	return 0;
}
