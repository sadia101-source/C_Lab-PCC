#include <stdio.h>

int main(){
	int n1, n2, a, b, temp, hcf, lcm;
	
	printf("Enter first number: ");
	if (scanf("%d", &n1)!=1){
		printf("Invalid input.\n");
		return 1;
	}
	
	printf("Enter second number: ");
	if (scanf("%d", &n2)!=1){
		printf("Invalid input.\n");
		return 1;
	}
	
	a = n1;
	b = n2;
	
	while (b!=0){
		temp = b;
		b = a%b;
		a = temp;
	}
	hcf = a;
	
	if (hcf==0){
		lcm = 0;
	} else {
		lcm = (n1*n2)/hcf;
	}
	
	printf("\n--RESULT--\n");
	printf("HCF (GCD) : %d\n", hcf);
	printf("LCM : %d", lcm);
	
	return 0;
}
