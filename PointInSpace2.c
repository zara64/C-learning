#include <stdio.h>
#include <math.h>


struct point
{
	double x;
	double y;
};



int main(int argc, char const *argv[])
{
	double x,y;

	printf("Enter the dimension of first coordination (x;y): \n");
	scanf("%lf;%lf",&x,&y);
	struct point p1 = {x,y};

	printf("Enter the dimension of the second coordination (x;y): \n");
	scanf("%lf;%lf",&x,&y);
	struct point p2 = {x,y};

	double Length = sqrt (pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
	
	printf("the length of straight line between two coordinates is %2.3lf \n", Length);

	//printf("x = %3.2lf, y = %3.2lf /n",p.x ,p.y );
	return 0;
}

