# include<stdio.h>
#include <math.h>
void quadRoot(int a, int b, int c);
int main(){
    int num1,num2,num3;
    printf("enter num1");
    scanf("%d",&num1);
    printf("enter num2");
    scanf("%d",&num2);
    printf("enter num3");
    scanf("%d",&num3);
    quadRoot(num1,num2,num3);
    return 0; 
}
void quadRoot(int a, int b, int c)
{
    float quadR1, quadR2, d;
    d=((b*b)- 4*a*c);
    if (d==0)
    {
        quadR1=quadR2=(-b+ sqrt(d))/2*a;
        printf("both root are equal\n");
        printf("root is:%f",quadR1);
    }
    else if (d>0)
    {
        quadR1=(-b+ sqrt(d))/2*a;
        quadR1=(-b- sqrt(d))/2*a;
        printf("roots1:%f",quadR1);
        printf("roots2:%f",quadR2);

    }
    else 
    printf("roots are img");
    
}