#include <stdio.h>

int factorial(int n ) {
    int result = 1;
    int i;
    for ( i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n, r, ncr;
    printf("ENTER N: ");
    scanf("%d", &n);

    printf("ENTER R: ");
    scanf("%d", &r);

    if (r <= n) {
        ncr = factorial(n) / (factorial(r) * factorial(n - r));
        printf("nCr = %d\n", ncr);
    } else {
        printf("R cannot be greater than N.\n");
    }

    return 0;
}
