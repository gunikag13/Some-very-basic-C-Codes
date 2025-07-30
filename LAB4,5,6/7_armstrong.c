#include <stdio.h>
#include <math.h>
int main(){
    int i,num,count=0,rem,sum=0;
    int x[100];
    printf("Enter your number");
    scanf("%d",&num);
    int original=num;
    for ( i = 0;num>0; i++){
        x[i]=num%10;
        num=num/10;
        count++;
    }
    for (i = 0; i < count; i++)
    {
        sum = sum+pow(x[i],count);
    }

    if (sum==original)
        printf("Number is armstrong");
    else
        printf("number isn't");
    
    return 0;
}
