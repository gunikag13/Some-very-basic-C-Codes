#include<stdio.h>
int main(){
    int a,b,c,i=4,n;
    printf("Enter a num");
    scanf("%d",&n);
    a=0;
    b=1;
    c=1;
    printf("%d, %d, %d,",a,b,c);
    for(i=4;i<=n;i++)
    {
       a=b;
       b=c;
       c=a+b;
       printf("%d, ",c);
    }
    
}