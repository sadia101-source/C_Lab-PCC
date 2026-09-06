#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <omp.h>
#define N 20

bool armstrong(int n);

int main(){
	int array[N];
	int i;
	printf("Enter 20 array integer elements:-\n");
	for(i=0; i<N;i++){
		printf("Enter element %d : ", i+1);
		scanf("%d", &array[i]);
    }
    
    #pragma omp parallel for
    for(i=0;i<N; i++){
        if(armstrong(array[i])){
    	    printf("%d is an Armstrong number.\n", array[i]);
	    } else {
		    printf("%d is not an Armstrong number.\n", array[i]);
	    }
    }
    
    return 0;
}

bool armstrong(int n){
	int temp = n, digits = 0, sum = 0;
	
	while (temp != 0){
		digits++;
		temp /=10;
	}
	
	temp = n;
	while (temp != 0){
		sum = sum + pow(temp%10, digits);
		temp /= 10;
	}
	
	if (sum==n){
		return true;
	}
	
	return false;
}
