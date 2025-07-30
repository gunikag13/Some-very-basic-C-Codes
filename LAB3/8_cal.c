#include<stdio.h>
float add(float a, float b);
float sub(float a, float b);
float mul(float a, float b);
float div(float a, float b);
int main(){
    int choice;
    float num1,num2;
    do{
        printf("\n====== Calculator Menu ======\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        if (choice!= 1 ||choice!= 2 ||choice!= 3 ||choice!= 4 ||choice!= 5 )
            printf("invalid operation");
        if (choice!=5)
            {
            printf("enter num1");
            scanf("%f",&num1);
            printf("enter num2");
            scanf("%f",&num2);
        }

        switch (choice){
            case 1:
                add(num1,num2);
                break;
            case 2:
                sub(num1,num2);
                break;
            case 3:
                mul(num1,num2);
                break;
            case 4:
                div(num1,num2);
                break;
            case 5:
                printf("Exiting the calculator. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
            }

    } while (choice != 5);
  
    return 0;
}

float add(float a,float b){
    float z;
    z= a+b;
    printf("%f",z);
}
float sub(float a,float b){
    float z;
    z= a-b;
    printf("%f",z);
}
float mul(float a,float b){
    float z;
    z= a*b;
    printf("%f",z);
}
float div(float a,float b){
    float z;
    if (b!=0)
    z= a/b;
    printf("%f",z);
    if (b==0)
    printf("not defined");
    
}
