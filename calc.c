#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
double NumberOne;
double NumberTwo;
char Operator;

NumberOne=atof(argv[2]);
NumberTwo=atof(argv[3]);
Operator=(argv[1][0]);

char subtraction='-';
char addition='+';
char multiplication='*';
char division='/';

double answer=0;

		while(Operator == '+')
		{
			printf("%g\n", NumberOne + NumberTwo);
			break;
		}

		while(Operator == '-')
		{
			printf("%g\n", NumberOne - NumberTwo);
			break;
		}
		while(Operator == '/')
		{
			printf("%g\n", NumberOne / NumberTwo);
			break;
		}
		while(Operator == '*')
		{
			printf("%g\n", NumberOne * NumberTwo);
			break;
		}
	return 0;
}

