#include <stdio.h>
int main() {

    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    // Input matrix a
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input matrix b
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize matrix c to zero
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result matrix c
    printf("Result matrix C:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
