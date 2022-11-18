#include <stdio.h>

int main() {
	int x, y, area;
	printf("Enter Length of rectangle: ");
	scanf("%i", &x);
	printf("Enter Width of rectangle: ");
	scanf("%i", &y);
	area =  x * y;
	printf("The area of the rectangle is %i\n", area );
	return 0;
}

