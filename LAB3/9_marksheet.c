#include<stdio.h>
void gradSystem(float a);
int main(){
    float phy,math,appMech,cProg,basicElec;
    printf("Enter marks for C Programming, Physics, Maths, Applied Mechanics, and Basic Electrical: ");
    scanf("%f%f%f%f%f", &cProg, &phy, &math, &appMech, &basicElec);
    if (cProg>100||phy>100||math>100||appMech>100||basicElec>100)
       { printf("enter marks in range of 0 to 100");
        return 1;
    }
    
    printf("----------your marksheet-----------\n");
    printf("marks of C Programming\t");
    printf("%f\t",cProg);
    gradSystem(cProg);
    printf("marks of Physics\t");
    printf("%f\t",phy);
    gradSystem(phy);
    printf("marks of Maths\t");
    printf("%f\t",math);
    gradSystem(math);
    printf("marks of applied Mechanics\t");
    printf("%f\t",appMech);
    gradSystem(appMech);
    printf("marks of Basic Electrical\t");
    printf("%f\t",basicElec);
    gradSystem(basicElec);
    printf("---------------------------------------------------------\n");
    float sum,percentage;
    sum = cProg+appMech+math+phy+basicElec;
    percentage =sum/5;
    printf("total marks=%f\n",sum);
    printf("percentage=%f",percentage);
    return 0;
}
void gradSystem(float a)
{
   int z;
   z=a/10;
    switch(z){
        case 10:
            printf("perfect score\n");
            break;
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5:
            printf("E\n");
            break;
        default:
            printf("FAILED\n");
            break;

    } 

}