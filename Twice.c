#include <stdio.h>

int * Twice( int arr1[], int n)
{

	int *p1= NULL;
	int RepNum=0;
	
	for (int i = 0; i < n; i++)
	{
		RepNum = arr1[i];
		for (int j = i+1; j < n; j++)
		{
			if (arr1[j] == RepNum)
			{
				p1= &arr1[j];
				break;
			}
			
		}
	if(p1 != NULL)
	{
		break;
	}

	}
	if( p1 != NULL)
	{
		return p1;}
	else
	{	
		return NULL;
	}

	
	
}



int main(int argc, char const *argv[])
{
	int array1[]={1,2,3,4,5,6,7,9,4,3};
	int size=10;
	

	int * res=Twice(array1,size);
	printf("%p\n", res );

	return 0;
}
