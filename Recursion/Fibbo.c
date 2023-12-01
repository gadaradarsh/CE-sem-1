#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        int result = fibonacci(n);
        printf("The %dth element in the Fibonacci series is: %d\n", n, result);
    }
    
    return 0;
}
