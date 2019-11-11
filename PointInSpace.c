#include <stdio.h>

struct point
{
	double x;
	double y;
};

int main(int argc, char const *argv[])
{
	double x,y;

	printf("Enter the dimension of your coordination like x;y : \n");
	scanf("%lf;%lf",&x,&y);

	struct point p = {x,y};

	//printf("x = %3.2lf, y = %3.2lf",p.x ,p.y );
	return 0;
}
