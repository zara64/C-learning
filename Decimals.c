#include <stdio.h>
#include <math.h>
#include <string.h>

int dec_to_int(char* s){

	
	int mainNum=0;
	int len=strlen(s);
	
	for (int i =0; i <len; i++)
	{
		mainNum += ((s[len - (i+1)]) * pow(10,i));
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
