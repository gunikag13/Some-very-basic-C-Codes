// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num, count=0,i,j,orignal,rem,num1,newNum=0;
//     printf("Enter your number");
//     scanf("%d",&num);
//     orignal=num1=num;
//     for (i = 0; num>0; i++)
//     {
//       num/=10;
//       count++;
//     }
//     for (j = count; j>0; j--)
//     {
//         rem=num1%10;
//         num1/=10;
//         newNum = newNum+ rem* pow(10,count-1);
//         count--;
//     }
//     if (orignal==newNum)
//         printf("number is palindrome ");
//     else
//         printf("number isnt");
//     return 0;
    
// }

#include <stdio.h>

int main() {
    int num, original, rem, reversed = 0;

    printf("Enter your number: ");
    scanf("%d", &num);

    original = num;  // Save original for comparison

    while (num > 0) {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    }

    if (original == reversed)
        printf("Number is a palindrome.\n");
    else
        printf("Number is not a palindrome.\n");

    return 0;
}
