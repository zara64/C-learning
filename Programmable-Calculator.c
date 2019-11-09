#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main(int argc, char const *argv[])
{
	char str[256];
	char tmp[256];
	char buff[256];
	FILE *fp=fopen(argv[1],"r");
	FILE *fop= fopen(argv[2], "w+");

	while( fgets(buff, sizeof(buff), fp) != NULL)
	{
		
			strcpy(str,buff);
   			double num1;
   			double num2;
   			char opp;
   			double result;
   			sscanf(str,"%lf %c %lf",&num1,&opp,&num2);
			switch(opp)
			{
				case '+':
					result=num1+num2;
				break;

				case '-':
					result=num1-num2;
				break;

				case '*':
					result=num1*num2;
				break;

				case '/':
					result=num1/num2;
				break;



			}
		fprintf(fop, "%5.2lf\n",result);;
			

	}
	fclose(fop);
	fclose(fp);

	return 0;
}
