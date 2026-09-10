#include <stdio.h>
#include <omp.h>

int main()
{
    int n;
    printf("Enter number of threads: ");
    scanf("%d", &n);
    omp_set_num_threads(n);

    #pragma omp parallel
    {
    int id = omp_get_thread_num();
    printf("Thread %d reporting\n", id);
    }

    return 0;
}

