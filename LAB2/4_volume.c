#include<stdio.h>
#define PI 3.14159
int main(){
    float radius,height,area,volume;
    printf("Enter radius");
    scanf("%f",&radius);
    printf("Enter height");
    scanf("%f",&height);
    area= (2*PI*radius)*height;
    printf("area is:\n");
    printf("%f\n",area);
    printf("volume is:\n");
    volume= (PI*radius*radius*height)/3;
    printf("%f",volume);
return 0;
}
