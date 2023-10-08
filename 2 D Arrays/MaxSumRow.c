#include <stdio.h>

int main() {
    int maxSum = -1;
    int maxRow = -1;
    int n, m;

    printf("ENTER NO. ROW : ");
    scanf("%d", &n);
    printf("ENTER NO. COLUMN : ");
    scanf("%d", &m);

    int arr[n][m], i, j;

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate the sum of rows and find the maximum sum and its row number
    for (i = 0; i < n; i++) {
        int rowSum = 0;
        for (j = 0; j < m; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    // Print the row number having the maximum sum
    printf("Row with the maximum sum is row %d.\n", maxRow + 1); // Adding 1 to convert from 0-based index to 1-based index

    return 0;
}
