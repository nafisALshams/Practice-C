/*Computing the dimensional weight of a box
  from input provided by the user. */

#include <stdio.h>

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
	weight = (volume + 165) / 166;

	printf("Dimensions given are: %dx%dx%d\n",height, length, width);
	printf("Dimensional weight (pounds): %d\n", weight);
	printf("Volume (cubic inches): %d\n", volume);
	return 0;

}