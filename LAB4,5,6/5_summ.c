#include<stdio.h>
int main(){
    int i;
    float num,sum=0;
    printf("enter your number");
    scanf("%f",&num);
    for (i = 1; i <= num; i++)
    {
        sum = sum+ ((float)1/i);
    }
    printf("%f",sum);
    return 0;
}