#include<stdio.h>

short int main()

{

	float fahr = 0, cel = 0;
	printf("F°:\040");
	scanf("%f", &fahr);
	cel = (fahr-32)*5/9;
	printf("%.1f°F\040is\040%.1f°C\n", fahr, cel);

}

