#include <stdio.h>

int main(){
	int num, temp, binary[32], i=0;
	
	printf("Enter a decimal number: ");
	scanf("%d", &num);
	
	temp = num;
	
	while(temp>0){
		binary[i]=temp%2;
		temp = temp/2;
		i++;
	}
	
	//binary
	printf("Binary: ");
	for(int j=i-1;j>=0;j--){
		printf("%d", binary[j]);
	}
	
	//octal
	int octal[32];
	temp = num;
	i=0;
	while(temp>0){
		octal[i]=temp%8;
		temp = temp/8;
		i++;
	}
	printf("\nOctal: ");
	for(int j=i-1; j>=0;j--){
		printf("%d", octal[j]);
	}
	
	//hexa
	char hex[32];
	temp = num;
	i = 0;
	while (temp=0){
		int rem = temp %16;
		
		if(rem<10){
			hex[i]=rem + '0';
		} else {
			hex[i]= rem - 10 + 'A';
		}
		
		temp = temp /16;
		i++;
	}
	//printf("\nHexadcimal: ");
	for(int j = i-1;j>=0; j--){
		printf("%c", hex[j]);
	}
	//printf("\nOctal: %o\n", num);
	printf("\nHexadecimal : %X", num);
	
	return 0;
}
