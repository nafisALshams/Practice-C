/* A program to calculate the volume of a sphere */

#include <stdio.h>
#define FRACTION (4.0f/3.0f)
#define PI_VALUE 3.14159265f

int main(void){
	float volume, rad;
	printf("Enter a valid radius for a sphere: ");
	scanf("%f", &rad);
	volume = FRACTION * PI_VALUE * (rad * rad * rad);
	printf("%f", volume);
	return 0;
}