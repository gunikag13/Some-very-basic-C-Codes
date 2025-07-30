#include <stdio.h>

void mulMatrix(int* arrA, int* arrB, int* arrC,
               int numARow, int numACol, int numBRow, int numBCol);

void matrixSum(int* arrA, int* arrB, int* arrC,
               int numARow, int numACol, int numBRow, int numBCol);

int main() {
    int aRow, aColumn, bRow, bColumn;
    int i, j;

    printf("Enter number of Rows and Columns of matrix A: ");
    scanf("%d %d", &aRow, &aColumn);

    if (aRow > 10 || aColumn > 10 || aRow < 1 || aColumn < 1) {
        printf("Matrix size should be between 1x1 and 10x10.\n");
        return 1;
    }

    int a[10][10], b[10][10], c[10][10];

    for (i = 0; i < aRow; i++) {
        printf("Enter elements of Row-%d: ", i + 1);
        for (j = 0; j < aColumn; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter number of Rows and Columns of matrix B: ");
    scanf("%d %d", &bRow, &bColumn);

    if (bRow > 10 || bColumn > 10 || bRow < 1 || bColumn < 1) {
        printf("Matrix size should be between 1x1 and 10x10.\n");
        return 1;
    }

    for (i = 0; i < bRow; i++) {
        printf("Enter elements of Row-%d: ", i + 1);
        for (j = 0; j < bColumn; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int num;
    do {
        printf("\nWhat do you want me to do?\n");
        printf("1: Addition of both matrices\n");
        printf("2: Check if both matrices are equal (not implemented)\n");
        printf("3: Multiply both matrices\n");
        printf("4: Check if they are inverse (not implemented)\n");
        printf("-1: Exit\n");
        printf("Enter choice: ");
        scanf("%d", &num);

        if (num == 1) {
            if (aRow == bRow && aColumn == bColumn) {
                matrixSum(&a[0][0], &b[0][0], &c[0][0], aRow, aColumn, bRow, bColumn);
                printf("The sum is:\n");
                for (i = 0; i < aRow; i++) {
                    for (j = 0; j < aColumn; j++) {
                        printf("%d\t", c[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Addition not possible. Matrices must be the same size.\n");
            }
        } else if (num == 3) {
            if (aColumn == bRow) {
                mulMatrix(&a[0][0], &b[0][0], &c[0][0], aRow, aColumn, bRow, bColumn);
                printf("The product is:\n");
                for (i = 0; i < aRow; i++) {
                    for (j = 0; j < bColumn; j++) {
                        printf("%d\t", c[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Multiplication not possible. A's columns must equal B's rows.\n");
            }
        } else if (num == -1) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid option.\n");
        }

    } while (num != -1);

    return 0;
}

void matrixSum(int* arrA, int* arrB, int* arrC,
               int numARow, int numACol, int numBRow, int numBCol) {
    int i, j;
    for (i = 0; i < numARow; i++) {
        for (j = 0; j < numACol; j++) {
            *(arrC + (i * numACol) + j) =
                *(arrA + (i * numACol) + j) + *(arrB + (i * numACol) + j);
        }
    }
}

void mulMatrix(int* arrA, int* arrB, int* arrC,
               int numARow, int numACol, int numBRow, int numBCol) {
    int i, j, k;
    for (i = 0; i < numARow; i++) {
        for (j = 0; j < numBCol; j++) {
            *(arrC + i * numBCol + j) = 0;
            for (k = 0; k < numACol; k++) {
                *(arrC + i * numBCol + j) +=
                    *(arrA + i * numACol + k) * *(arrB + k * numBCol + j);
            }
        }
    }
}
