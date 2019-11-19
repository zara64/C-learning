#include <stdio.h>
#include <stdlib.h>

struct point
{
	double x,y;
};

struct polygon
{
	int n; // the number of points
	point* p;	
};

struct point coordination(double x, double y)
{

	printf("Enter the dimension of your coordination like x;y : \n");
	scanf("%lf;%lf",&x,&y);

	struct point p = {x,y};

}


int main(int argc, char const *argv[])
{
	double x,y;
	int n;
	struct point p1;
	struct polygon p2;
	printf("Please enter the number of vertices:\n");
	scanf("%d",&n);
	// assign a dynamic memory to points
	p1 = (struct point*) alloc(n,sizeof(struct point));

	for (int i = 0; i < n; ++i)
	 {

			(*p1+i) = coordination(x,y);
	 } 

	 p2=(struct polygon*) alloc(sizeof(struct polygon));
	 p2={n,p1};
	 

	return 0;
}
