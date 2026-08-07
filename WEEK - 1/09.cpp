#include <stdio.h>
#define MAX_SIZE 100

int main(){
	int arr[MAX_SIZE];
	int n, i, value, position;
	
	printf("Enter size of array (b/w 1 and %d): ", MAX_SIZE-1);
	if (scanf("%d", &n)!=1||n<0||n>=MAX_SIZE){
		printf("Invalid array size.\n");
		return 1;
	}
	
	printf("Enter %d elements: \n", n);
	for (i=0; i<n;i++){
		printf("Enter element [%d]: ", i+1);
		if (scanf("%d", &arr[i])!=1){
			printf("Invalid input.\n");
			return 1;
		}
	}
	
	printf("\nEnter value to insert: ");
	if (scanf("%d", &value)!=1) return 1;
	
	printf("\nEnter position where value may be inserted (1 to %d): ", n+1);
	if(scanf("%d", &position)!=1||position<1||position>n+1){
		printf("Invalid position.\n");
		return 1;
	}
	
	for (i=n;i>=position;i--){
		arr[i]=arr[i-1];
	}
	
	arr[position-1]= value;
	n++;
	
	printf("\n--UPDATED ARRAY--\n");
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
