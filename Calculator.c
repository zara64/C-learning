#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("Please add number one then the Operand and second number\n");
	double num1,num2;
	char Operand;
	double result;
	scanf("%lf%c%lf", &num1, &Operand, &num2);


	switch (Operand)
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
	printf("The result of %lf %c %lf is %lf \n", num1,Operand,num2,result);

	return 0;
}
