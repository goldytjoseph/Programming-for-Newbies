#include <stdio.h>

#include "const.h"

int main() {
	double radius = 10.0;
	printf("Area of the circle with Radius of (10) is : %lf\n", (PI * (radius * radius)));
	printf("Circumference of the circle with Radius of (10) is : %lf\n", (TWOPI*radius));
	// using Macros with args
	printf("Area of the circle with Radius of (10) is : %lf\n", C_AREA(radius));
	// Stringizing
	printf(PRINT(C_AREA(radius)));
	puts(" ");
	return 0;
}
