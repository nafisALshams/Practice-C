/* Practice problem where the assignments are replaced
and weight var is removed */

#include <stdio.h>

int main(void){
	int height = 8, length = 12, width = 10, volume;
	volume = height * length * width;

	printf("Dimensions: %dx%dx%d\n",height, length, width);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
	printf("Volume (cubic inches): %d\n", volume);
	return 0;
}