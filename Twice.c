#include <stdio.h>

void Twice( int arr1, int size)
{

	int *ip=null;
	int repp;
	for (int i = 0; i < size; ++i)
	{
		repp=arr1[i];
		for (int j = i+1; j < size; ++j)
		{
			if (arr1[j] == repp)
			{
				ip= &arr1[j];
				break;
				
			}
			
		}
	if(ip != null)
	{
		break;
	}

	}
	printf("%d\n",*ip);
	
}



int main(int argc, char const *argv[])
{
	int array1[]={1,2,3,4,5,6,7,9,4,3}
	int size=10;
	/*printf("please enter how many numbers you want to enter : \n");
	scanf("%d",&size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d",&array1[i]);
	}
	*/

	Twice(array1,size);

	return 0;
}
