#include <stdio.h>
#include <stdlib.h>

struct point
{
	double x,y;
};

struct polygon
{
	//int n;
	struct point pnt;	
};

int main(int argc, char const *argv[])
{
	
	int n;
	double x,y;
	struct polygon* poly;
	poly= (struct polygon*) malloc(n*sizeof(struct polygon));



	printf("Please enter the number of vertices:\n");
	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		printf("Enter your vertex like x;y : \n");
		scanf("%lf;%lf",&x,&y);
		struct point p = {x,y};

		poly[i].pnt= p;
	}
	
	for (int i = 0; i < n; ++i)
	{
		printf("%lf;%lf;%p\n", poly[i].pnt.x,poly[i].pnt.y, &poly[i].pnt);
	}



return 0;
}
