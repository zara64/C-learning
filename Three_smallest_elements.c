#include <stdio.h>

void three_smallest(int a[], int size)
{
	
	int cnt1;
	for (int i = 0; i < size; i++)
	{
		for (int j=i+1 ; j < size; j++)
		{
			if ( a[i] > a[j] )
			{
				cnt1=a[i];
				a[i]=a[j];
				a[j]=cnt1;
			}
		}
	}
	

	printf("the smallest number is %d \n", a[0]);
	printf("the second smallest number is %d \n", a[1]);
	printf("the third smallest number is %d \n", a[2]);
}

int main()
{
	int arr1[100],size;
	

	printf("please enter how many numbers you want to enter : \n");
	scanf("%d",&size);

	for (int i = 0; i < size; i++)
	{
		scanf("%d",&arr1[i]);
	}

	three_smallest(arr1,size);

	return 0;

}
