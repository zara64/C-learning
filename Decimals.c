#include <stdio.h>
#include <math.h>

int dec_to_int(char* s){

	int count=0;
	int mainNum=0;
	while(s[count] != '\0')
	{
		count++;
	}
	
	for (int i =0; i <count; i++)
	{
		mainNum += s[i]*(pow(10,count-1));
		count--;
	}
	return mainNum;
}

int main(int argc, char const *argv[])
{
	char string[20];
	printf("Please inter a decimal number !\n");
	scanf("%s",string);
	int result= dec_to_int(string);
	printf("%d\n", result);
}
