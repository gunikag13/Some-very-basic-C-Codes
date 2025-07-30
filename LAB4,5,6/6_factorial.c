#include<stdio.h>
int factorial(int n);
int main(){
    int num,i;
    float sum=0;
    printf("enter your number");
    scanf("%d",&num);
    for (i = 1; i <= num; i++)
    {
        sum = sum+ ((float)1/factorial(i));
    }
    printf("%f",sum);
    return 0;
}
int factorial(int n){
    int mul,i;
    mul=1;
    for (i = n; i>1; i--)
    {
        mul*=i;
    }
    return mul;
}