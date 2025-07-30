#include<stdio.h>
void isPrime(int num);
void numOfPrime(int num1, int num2);
int main(){
    int num1,num2;
    printf("Enter your numbers");
    scanf("%d %d",&num1,&  num2);
    numOfPrime(num1,num2);

}
void isPrime(int num){
    int i,isPrime=1;
    for ( i = 2; i < num; i++)
    {
        if (num%i==0)
            {isPrime = 0;
            break;}
    }
    if (isPrime==1)
        printf("%d\n",num);
}
void numOfPrime(int num1, int num2){
    int i,num;
    for (i = num1; i < num2; i++){
       num = num1+i;
       isPrime(num);
    }
   
}