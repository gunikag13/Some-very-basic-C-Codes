#include <stdio.h>
void mulMatrix(int *arrA, int *arrB,int *arrC, int numARow,int numACol, int numBRow, int numBCol);
void matrixSum(int *arrA, int *arrB,int *arrC, int numARow,int numACol, int numBRow, int numBCol);
int main() {
    int aRow, aColumn, i, j;
    printf("Enter number of Rows and Columns of matrix: ");
    scanf("%d %d", &aRow, &aColumn);

    // Basic validation
    if (aRow > 10 || aColumn > 10 || aRow < 1 || aColumn < 1) 
    {
        printf("Matrix size should be between 1x1 and 10x10.\n");
        return 1;
    }

    int a[10][10];

    for (i = 0; i < aRow; i++) 
    {
        printf("Enter elements of Row-%d: ", i + 1);
        for (j = 0; j < aColumn; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    int bRow, bColumn;
    printf("Enter number of Rows and Columns of matrix 2: ");
    scanf("%d %d", &bRow, &bColumn);

    // Basic validation
    if (bRow > 10 || bColumn > 10 || bRow < 1 || bColumn < 1) 
    {
        printf("Matrix size should be between 1x1 and 10x10.\n");
        return 1;
    }
    
    int b[10][10],c[10][10];

    for (i = 0; i < bRow; i++) 
    {
        printf("Enter elements of Row-%d: ", i + 1);
        for (j = 0; j < bColumn; j++) 
        {
            scanf("%d", &b[i][j]);
        }
    }
    int num;
    do{
        printf("What do you want me to do ?\n");
        printf("press 1:addition of both matrices\n");
        printf("press 2:To check whether both matrices are equal\n");
        printf("press 3:To multiply both matrices\n");
        printf("press 4:To check whether they are inverse of each other\n");
        printf("press -1:to exit");
        scanf("%d",&num);

        if (num == -1) 
        {
            break;
        }
        else if (num==1)
        {
            matrixSum(&a[0][0], &b[0][0], &c[0][0], aRow, aColumn, bRow, bColumn);
            printf("The sum is:\n");
            for (i = 0; i < aRow; i++)
            {
                printf("\n");
                for (j = 0; j < aColumn; j++)
                {
                    printf("%d\t",c[i][j]);
                }
                
            }
            
        }
        else if (num==3)
        {
            mulMatrix(&a[0][0], &b[0][0], &c[0][0], aRow, aColumn, bRow, bColumn);
            printf("The product is: \n");
            for (i = 0; i < aRow; i++)
            {
                printf("\n");
                for (j = 0; j < bColumn; j++)
                {
                    printf("%d\t",c[i][j]);
                }
                
            }
        }
        else{
            printf("invalid bruh");
        } 
    } 
    while (num !=-1);

    return 0;

}
void mulMatrix(int* arrA, int* arrB, int* arrC, int numARow, int numACol, int numBRow, int numBCol) {
    if (numACol != numBRow) {
        printf("Matrix multiplication not possible.\n");
        return;
    }

    for (int i = 0; i < numARow; i++) {
        for (int j = 0; j < numBCol; j++) {
            int sum = 0;
            for (int k = 0; k < numACol; k++) {
                sum += (*(arrA + i * numACol + k)) * (*(arrB + k * numBCol + j));
            }
            *(arrC + i * numBCol + j) = sum;
        }
    }
}
void matrixSum(int *arrA, int *arrB,int *arrC, int numARow,int numACol, int numBRow, int numBCol)
{
    int i,j;
    if (numACol!= numBCol || numARow!=numBRow)
    {
        printf("invalid operation");
    }
    for (i = 0; i < numARow; i++)
    {
        for (j = 0; j < numACol; j++)
        {
            *(arrC + (i*numACol)+ j)= *(arrA + (i*numACol)+j)+ *(arrB +(i*numACol)+j);
        }
        
    }

}