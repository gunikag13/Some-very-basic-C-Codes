#include<stdio.h>
int main(){
    int i,n,count;
    printf("till how much you want to print the pattern");
    scanf("%d",&count);
    for (i =count; i >=1; i--)
    {
        for (n = 1; n <= i; n++)
        {
            printf("%d ",n);
        }
        printf("\n");
    }
    return 0;
}