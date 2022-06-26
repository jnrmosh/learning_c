#include <stdio.h>

int main()
{
	float pi = 3.14;
	int radius, area;
	printf("Enter the radius of the circle\n");
	scanf("%i", &radius);

	area = pi * radius * radius;
	printf("The area of a circle of radius %i is %i\n", radius ,area);
}
