# include <stdio.h>
# include <omp.h>

int main(){
	int sum = 0, id;
	
	omp_set_num_threads(4);
	
	# pragma omp parallel shared(id)
	{
		id = omp_get_thread_num();
		sum += id;
	}
	
	printf("Sum = %d", sum);
}
