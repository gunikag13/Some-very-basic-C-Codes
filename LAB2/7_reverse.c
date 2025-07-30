#include<stdio.h>
int main(){
    int num,rem,i;
    printf("enter a number");
    scanf("%d",&num);
    for (i=0;num>0;i++)
    {
       rem = num%10;
       printf("%d",rem);
       num = num/10;
    }
    


}