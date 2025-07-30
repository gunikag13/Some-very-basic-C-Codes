#include<stdio.h>
void numOfEven(int num1,int num2);
int main(){
    int num1,num2;
    printf("Enter your numbers:");
    scanf("%d %d",&num1,&num2);
    numOfEven(num1,num2);
    return 0;
}
void numOfEven(int num1,int num2){
    printf("Even numbers between %d and %d:\n", num1, num2);
    int i,counter =0,newNum=num1;
    for (i = 1; i <(num2-num1)/2; i++)
    {
        newNum = newNum + 2;
        printf("%d\n",newNum);
        counter++;
    }
    printf("no. of even num:%d",counter);
}