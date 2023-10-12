#include <stdio.h>

int sum(int x);

int main() {
    int n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    int result = sum(n);

    printf("The sum of the digits in %d is %d\n", n, result);

    return 0;
}

int sum(int n) {
    int rem = 0;

    while (n != 0) {
        rem += n % 10;
        n /= 10;
    }

    return rem;
}
