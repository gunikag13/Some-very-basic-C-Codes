#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter num1");
    scanf("%d",&num1);
    printf("enter num2");
    scanf("%d",&num2);
    printf("enter num3");
    scanf("%d",&num3);
    if (num1>num3 && num1>num2)
    printf("num1");
    if (num2>num3 && num2>num1)
    printf("num2");
    if (num3>num2 && num3>num1)
    printf("num3");

}