#include <stdio.h>
#include <stdbool.h>

int main(){
	int start, end, i, j;
	bool is_prime;
	
	printf("Enter starting number of range: ");
	if (scanf("%d", &start)!=1){
		printf("Invalid input.\n");
		return 1;
	}
	
	printf("Enter ending number of range: ");
	if (scanf("%d", &end)!=1){
		printf("Invalid input.\n");
		return 1;
	}
	
	if (start>end){
		int temp = start;
		start = end;
		end = temp;
	}
	
	for (i=start; i<=end;i++){
		if(i<=1){
			continue;
		}
		
		is_prime = true;
		
		for (j=2; j<=i/2;j++){
			if (i%j==0){
				is_prime = false;
				break;
			}
		}
		if (is_prime){
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
