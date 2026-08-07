#include <stdio.h>
#define MAX_SIZE 100

int main(){
	int arr[MAX_SIZE];
	int n, i;
	int largest, smallest;
	
	printf("Enter the size of array: ");
	if (scanf("%d", &n)!=1){
		printf("Invalid numeric input.\n");
		return 1;
	}
	
	if (n<0 || n>MAX_SIZE){
		printf("SIze can only be between 1 and %d", MAX_SIZE);
		return 1;
	}
	
	printf("Enter %d elements: \n", n);
	for (i=0; i<n; i++){
		printf("Enter element [%d]: ", i+1);
		if (scanf("%d", &arr[i])!=1){
			printf("Invalid input.\n");
			return 1;
		}
	}
	
	largest = arr[0];
	smallest = arr[0];
	
	for (i=1; i<n;i++){
		if (arr[i]>largest){
			largest=arr[i];
		}
		if (arr[i]<smallest){
			smallest = arr[i];
		}
	}
	
	printf("\n--ARRAY RESULTS--\n");
	printf("Smallest number in array: %d\n", smallest);
	printf("Largest number in array: %d", largest);
	
	return 0;
}
