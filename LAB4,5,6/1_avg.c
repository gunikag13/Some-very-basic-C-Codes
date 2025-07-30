#include<stdio.h>
int main(){
    int counter,num,sum;
    float avg;
    counter=0;
    sum=0;
    do
    {
        printf("enter number %d\n",counter);
        printf("enter num -1 to exit");
        scanf("%d",&num);
        if (num!=-1)
        {sum = sum + num;
        counter++;}
    } while (num!=-1);

    avg=(float)sum/counter;
    printf("Average is:%f",avg);
    return 0;
}