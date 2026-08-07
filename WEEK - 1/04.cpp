#include <stdio.h>
#include <math.h>

int main(){
	double principal, rate, time;
	double s_interest, c_interest, amount;
	
	printf("Enter principal amount: ");
	if (scanf("%lf", &principal)!=1) return 1;
	
	printf("Enter annual interest rate(%%): ");
	if (scanf("%lf", &rate)!=1) return 1;
	
	printf("Enter time period (in years): ");
	if (scanf("%lf", &time)!=1) return 1;
	
	s_interest = (principal*rate*time)/100.0;
	amount = principal*pow(1+(rate/100.0),time);
	c_interest = amount - principal;
	
	printf("\n----INTEREST CALCULATION----\n");
	printf("1. Principal: %.2lf\n", principal);
	printf("2. Simple Interest: %.2lf\n", s_interest);
	printf("3. Compund Interest: %.2lf\n", c_interest);
	printf("4. Final Amount: %.2lf", amount);
	
	return 0;
}
