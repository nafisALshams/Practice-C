/* A program that counts the amount of dollar bills needed
   for a total amount given by the user                 */

#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1


int main(void){

	int total, res;
	printf("Enter a dollar amount: ");
	scanf("%d", &total);
	res = total / TWENTY;
	total = total - res * TWENTY ;
	printf("$20 bills: %d\n", res);
	res = total / TEN;
	total = total - res * TEN;
	printf("$10 bills: %d\n", res);
	res = total / FIVE;
	total = total - res * FIVE;
	printf("$5 bills: %d\n", res);
	res = total / ONE;
	printf("$1 bills: %d", res);
	return 0;
}