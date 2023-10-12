#include <stdio.h>// without pointers

// Function to swap two numbers without pointers
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside the swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function
    swap(num1, num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
