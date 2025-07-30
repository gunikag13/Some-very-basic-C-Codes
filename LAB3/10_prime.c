#include<stdio.h>
void prime(int a);
int main(){

        prime(1);

}
void prime(int a){
    if(a==0)
        printf("Entered number is zero");
    else if(a==1)
        printf("entered number is neither");
    else if(a==2)
        printf("The only even prime number");
    else{
        int i,isPrime;
        isPrime=1;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                isPrime=0;
                break;
            }
        }

        if(isPrime==1)
            printf("it is prime no");
        else
            printf("it is not prime no");
    
    }
}