#include<stdio.h>
void isdiv();

int main(){
    int num;
    printf("enter num");
    scanf("%d",&num);
    isdiv(num);
    return 0;
}

void isdiv(int x){
    if (x%5==0 && x%11==0)
    printf("yes");
    else
    printf("no");
}