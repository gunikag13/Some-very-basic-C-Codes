#include<stdio.h>
void table(int num);
int main(){
    int num;
    printf("enter your number");
    scanf("%d",&num);
    table(num);
    return 0;
}
void table(int num)
{
    int i,mul;
    for (i=1;i<=10;i++)
    {
        mul = num*i;
        printf("%dx%d:%d\n",num,i,mul);
    }
    
}
