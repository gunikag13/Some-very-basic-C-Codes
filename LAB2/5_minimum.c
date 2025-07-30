#include<stdio.h>
int main(){
    float num1,num2;
    printf("enter number-1");
    scanf("%f",&num1);
    printf("enter number-2");
    scanf("%f",&num2);
    if (num1>num2)
        printf("greater number is: %f",num1);
    else if (num2>num1)
        printf("greater number is: %f",num2);
    else
        printf("dude both are equal");
                
    return 0;
}