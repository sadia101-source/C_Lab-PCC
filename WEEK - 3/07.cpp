#include <stdio.h>
#include <omp.h>

int main(){
    int n, i;
    double pi = 0.0;
    
    printf("Enter number of terms: ");
    scanf("%d", &n);

    #pragma omp parallel for reduction(+:pi)
    for (i = 0; i < n; i++){
        if (i % 2 == 0)
            pi += 1.0 / (2 * i + 1);
        else
            pi -= 1.0 / (2 * i + 1);
    }

    pi = 4 * pi;
    printf("Value of pi = %.10f\n", pi);

    return 0;
}

