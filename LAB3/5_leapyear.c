#include<stdio.h>
void isLeapYear();
int main(){
    int year;
    printf("enter a number");
    scanf("%d",&year);
    isLeapYear(year);
    return 0;
}
void isLeapYear(int x){
    if (((x%4 ==0) && (x%100!=0))|| x%400==0)
        printf("yes");
    else
        printf("No");
     
}