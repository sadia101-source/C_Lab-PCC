#include <stdio.h>
#include <omp.h>

int main() {
    #pragma omp parallel for
    for (int i = 1; i <= 30; i++) {
        printf("Hello World  (iteration %d)\n", i);
    }
    return 0;
}

