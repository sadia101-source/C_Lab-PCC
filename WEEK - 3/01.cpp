#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter 20 integers:\n");

    for (i = 0; i < 20; i++) {
        scanf("%d", &n);

        if (n <= 1) {
            printf("%d is not a perfect number.\n", n);
            continue;
        }

        sum = 0;

        for (j = 1; j <= n / 2; j++) {
            if (n % j == 0)
                sum += j;
        }

        if (sum == n)
            printf("%d is a perfect number.\n", n);
        else
            printf("%d is not a perfect number.\n", n);
    }

    return 0;
}

