#include <stdio.h>
#include <omp.h>

int main()
{
    int num_procs = omp_get_num_procs();

    #pragma omp parallel
    {
	int thread_id = omp_get_thread_num();
    printf("Hello from thread %d. Total physical processors: %d\n", thread_id, num_procs);
    }

    return 0;
}

