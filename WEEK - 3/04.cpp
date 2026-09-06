#include <stdio.h>
#include <omp.h>

int main() {
	int i;
    #pragma omp parallel for schedule(static)
    for (i = 0; i < 100; i++) {
        printf("Hello World - Iteration %d.\n", i + 1);
    }

    return 0;
}
