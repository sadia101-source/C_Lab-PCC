#include <stdio.h>
#define N 20

int main(){
	int array[N];
	int i;
	printf("Enter 20 array integer elements:-\n");
	for(i=0; i<N;i++){
		printf("Enter element %d : ", i+1);
		scanf("%d", &array[i]);
	}
	
	//check
	for(i=0;i<N; i++){
		if(array[i]%2==0){
			printf("%d is even.\n", array[i]);
		} else {
			printf("%d id odd.\n", array[i]);
		}
	}
	
	return 0;
}
