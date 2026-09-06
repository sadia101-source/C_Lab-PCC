#include <stdio.h>
#include <omp.h>

int isPerfect(int n) {
    int sum = 0;
    for (int j = 1; j <= n / 2; j++) {
        if (n % j == 0)
            sum += j;
    }
    return (sum == n && n > 1);
}

int main() {
    int a[20], i;

    printf("Enter 20 integers: ");
    for (i = 0; i < 20; i++) {
        scanf("%d", &a[i]);
    }

    #pragma omp parallel for
    for (i = 0; i < 20; i++) {
        if (isPerfect(a[i]))
            printf("%d is a perfect number.\n", a[i]);
        else
            printf("%d is not a perfect number.\n", a[i]);
    }

    return 0;
}

