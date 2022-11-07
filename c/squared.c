#include <stdio.h>

int squared(int x)
{
	return x*x;
}

int main()
{
	int a;
	int b;
	a = 5;
	b = squared(8);
	int c = a + b;
	printf("%i\n", c);
	return 0;
}	
