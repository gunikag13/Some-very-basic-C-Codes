#include <stdio.h>

int main() {
    int i, j, count, gap;

    printf("Till how much you want to print the pattern: ");
    scanf("%d", &count);

    if (count % 2 == 0 || count < 1) {
        printf("Enter valid input (odd number)\n");
        return 1;
    }

    int rows = (count + 1) / 2;

    for (i = 1; i <= rows; i++) {
        gap = rows - i;

        // Print spaces
        for (j = 1; j <= gap; j++) {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

