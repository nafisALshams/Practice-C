/* A program that calculates the remaining balance of
   a loan after first three months, the loan amount
   is given by the user along with the interest rate 
   and monthly payment given. Every month is shown     
   separately.                                     */

#include <stdio.h>

int main(void){
	float total, rate, monthly_payment;

	printf("Enter amount of loan: ");
	scanf("%f", &total);
	
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	rate = (rate / 100) / 12; // 6% per year rate converted to 6% per month
	printf("%.3f\n", rate);
	printf("%.3f\n", total * rate);
	
	total = total + total * rate;
	total = total - monthly_payment;
	printf("Balance remaining after first payment: %.2f\n", total);

	total = total + total * rate;
	total = total - monthly_payment;
	printf("Balance remaining after second payment: %.2f\n", total);

	total = total + total * rate;
	total = total - monthly_payment;
	printf("Balance remaining after third payment: %.2f", total);

	return 0;
}

