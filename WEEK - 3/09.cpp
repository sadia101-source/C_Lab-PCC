#include <stdio.h>
#include <omp.h>

int main(){
    int n, i;
    long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        #pragma omp parallel for reduction(*:factorial)
        for (i = 1; i <= n; i++){
            factorial = factorial * i;
        }

        printf("Factorial of %d = %lld\n", n, factorial);
    }

    return 0;
}

