#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("The character is an alphabet.\n");

        if (ch >= 65 && ch <= 90)
            printf("It is in uppercase.\n");
        else
            printf("It is in lowercase.\n");
    }
    else
    {
        printf("The character is not an alphabet.\n");
    }

    return 0;
}