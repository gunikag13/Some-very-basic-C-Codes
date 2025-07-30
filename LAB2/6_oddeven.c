#include<stdio.h>
int main(){
    int num1;
    char *result;
    printf("enter a number");
    scanf("%d\n",&num1);
    // if (num1 %2==0)
    //     printf("The number is even");
    
    // else
    //     printf("the number is odd");

    // return 0;

     result = (num1%2==0 ? "even":"odd");
    printf("the result is:%s.\n",result);
    return 0;

}