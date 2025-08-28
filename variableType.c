#include <stdio.h>

int main(void)
{
	int height, length, width, volume;
	float profit, loss;

    height = 8;
    length = 12;
	width = 10;
	profit  = 2150.48;
	profit  = 2150.48f; //it's best to append letter f to a constant
					   //that contains a decimal point if the number
					   //is assigned to a float variable
	volume = height * length * width; //volume should be 960

	printf("Height: %d\n", height); //%d only works for int variables
	printf("Profit: %.2f\n", profit);//%nf is for float; n denotes the
									 //the number of digits you want 
									 //after the deciaml point forcefully
									 //default is six
	printf("Height: %d  Length: %d  Wdith: %d\n", height, length, width);
	return 0;
}