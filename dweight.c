/*Computing the dimensional weight of a box. */

#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;
	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n",height, length, width);
	printf("Dimensional weight (pounds): %d\n", weight);
	printf("Volume (cubic inches): %d\n", volume);
	return 0;

}