/*Computing the dimensional weight of a box
  from input provided by the user. */

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
	int height, length, width, weight, volume;
	printf("Enter height of box: ");
	scanf("%d", &height);
	printf("Enter length of box: ");
	scanf("%d", &length);
	printf("Enter width of  box: ");
	scanf("%d", &width);

	volume = height * length * width;
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

	printf("Dimensions given are: %dx%dx%d\n",height, length, width);
	printf("Dimensional weight (pounds): %d\n", weight);
	printf("Volume (cubic inches): %d\n", volume);
	return 0;

}