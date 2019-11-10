#include <stdio.h>

double Tricky(double arr[], int size)
{

	double *p= arr;
	if( p+4 != NULL)
		return arr[4];
	else
		return 0.0;
}

int main(int argc, char const *argv[])
{
	double array1[200];
	int n;
	printf("Enter how many numbers you want to enter :\n");
	scanf("%d", &n);

	printf("enter the numbers one by one :\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%lf",&array1[i]);
	}

	double result= Tricky(array1,n);
	printf("the element in forth place is equal to %lf\n",result);
	return 0;
}
