#include <stdio.h>
#include <omp.h>

int main()
{
    int sum = 0;
    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        #pragma omp critical
        {
        sum = sum + id;
        }
    }
    printf("Final sum of all thread IDs: %d\n", sum);
    return 0;
}

