#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int main(void)
{
	int result;
	int i,j,op;
	
	p[0]=sum;
	p[1]=subtract;
	p[2]=mul;
	p[3]=div;

	result=(*p[op])(i,j);
}
