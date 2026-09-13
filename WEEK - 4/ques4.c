#include<stdio.h>
#include<omp.h>

int main(){
	int i;
	long long sum1 = 0, sum2 = 0;
	double start_time1, end_time1, start_time2, end_time2;
	
	start_time1 = omp_get_wtime();
	# pragma omp parallel for
	for(i=1; i<=1000000;i++){
		sum1 += 1;
	}
	end_time1 = omp_get_wtime();
	printf("Time to perform parallel block = %f\n", end_time1 - start_time1);
	
	start_time2 = omp_get_wtime();
	for(i=1; i<=1000000;i++){
		sum2 += 1;
	}
	end_time2 = omp_get_wtime();
	printf("Time to perform serial block = %f", end_time2 - start_time2);
	
	
}
