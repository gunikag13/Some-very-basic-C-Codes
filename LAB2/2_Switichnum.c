#include<stdio.h>
int main()
{
float num1;
printf("enter your first number:");
scanf("%f",&num1);
float num2;
printf("enter your second number:");
scanf("%f",&num2);

printf("your first no.:%f\n",num1);
printf("your second no.:%f\n",num2);

float tum;
tum = num1;
num1 = num2;
num2 = tum;

printf("after swapping:");
printf("Number1:%f\n",num1);
printf("Number2:%f\n",num2);
return 0;
}