#include <stdio.h>



int arraySumFunction(int arr[],int size)
{
	int result=0;
	for (int i = 0; i < size; i++)
	{
		result+=arr[i];
	}

	return result;
}


int main()
{
	//int arr1[]={1,2,3,4,5,6,7,8,9,10};
	//printf("the sum up of array is %d \n", arraySumFunction(arr1,10));
	int a[100],sum,n;

	printf("Enter size of the array:\n");
	scanf("%d",&n);

	printf("Enter elements in array :\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}

	sum=arraySumFunction(a,n);
	printf("sum of array elements is:%d\n",sum);
	return 0;
}


