/* A program which takes a value of x from  user then
   displays the value for the following polynomials   
   3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6 and            
   ((((3x + 2) x - 5) x + 7)x - 6)                 */

#include <stdio.h>

int main(void){
	int x, res;
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x -6\n");
	printf("Enter a valid value for x: ");
	scanf("%d", &x);
	res = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x*x) + (7*x) - 6;;
	printf("Result for the polynomial above is :%d", res);
	printf("(((3x + 2) x - 5) x + 7)x - 6)");
	printf("Enter another valid value for x: ");
	scanf("%d", &x);
	res = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("Result for the polynomial above is :%d", res);
	return 0;
} 