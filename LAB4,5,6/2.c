#include <stdio.h>

int main() {
    int aRow, aColumn, i, j;

    // Get matrix dimensions from user
    printf("Enter number of Rows and Columns of the matrix: ");
    scanf("%d %d", &aRow, &aColumn);

    // Declare a 2D array with fixed maximum size
    int a[10][10];  // You cannot declare using aRow/aColumn in C like that

    // Input matrix elements
    for (i = 0; i < aRow; i++) {
        printf("Enter elements of Row-%d: ", i + 1);
        for (j = 0; j < aColumn; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < aRow; i++) {
        for (j = 0; j < aColumn; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

