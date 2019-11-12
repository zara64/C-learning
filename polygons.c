#include <stdio.h>

struct point
{
	double x;
	double y;
};

struct point coordination(double x, double y)
{

	printf("Enter the dimension of your coordination like x;y : \n");
	scanf("%lf;%lf",&x,&y);

	struct point p = {x,y};

}

int main(int argc, char const *argv[])
{
	//struct point pnt[];
	double x,y;
	struct point *ptr;
	printf("How many vertices your polygon has?\n");
	scanf("%d",&n);

	ptr=(struct point*) malloc(n*sizeof(struct point));

	if(ptr == NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}


	for (int i = 0; i < n; i++)
	{
		
        (*ptr+i)=coordination(x,y);
	}
 
	
}
