/* A program that takes the amount in dollars-and-cents from
   the user and displays the amount with 5% tax added     */

#include <stdio.h>
#define PERCENTAGE 0.05f

int main(void){
	float inp, amount;
	printf("Enter an amount: ");
	scanf("%f", &inp);
	printf("With tax added: %.2f", inp * PERCENTAGE + inp);
}