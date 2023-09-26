#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5]; // Declare and initialize brr array

    for (int i = 0; i < 5; i++) {
        brr[i] = arr[4 - i]; // Copy elements from arr in reverse order
    }

    // Print brr to verify the result
    for (int i = 0; i < 5; i++) {
        printf("%d ", brr[i]);
    }

    return 0;
}
