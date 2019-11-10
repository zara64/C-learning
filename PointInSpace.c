#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main(int argc, char const *argv[])
{
	double x,y;
	printf("Please enter the point's length\n");
	scanf("%ld\n",x);

	printf("Please enter the point's width\n");
	scanf("%ld\n",y);
	struct point p = {x,y};
	return 0;
}
