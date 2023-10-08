#include <stdio.h>
#include <limits.h>

int main() {
    int max = -1, smax = INT_MIN; // Initialize smax with INT_MIN
    int arr[5] = {1, 3, 4, 6, 5};
    
    // Calculate max
    for (int i = 0; i < 5; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    // Calculate smax
    for (int i = 0; i < 5; i++) {
        if (arr[i] < max && arr[i] > smax) {
            smax = arr[i];
        }
    }

    printf("%d", smax);

    return 0;
}
