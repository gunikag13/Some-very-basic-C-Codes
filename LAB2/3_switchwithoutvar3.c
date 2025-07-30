#include<stdio.h>
int main(){
    float num1;
        printf("enter ur 1st num");
        scanf("%f",&num1);

    float num2;
        printf("enter ur 2nd num");
        scanf("%f",&num2);

num1 = num1 + num2;
num2 = num1 - num2;
num1 = num1 - num2;

printf("after swapping:\n");
printf("Number1:%f\n",num1);
printf("Number1:%f\n",num1);
}