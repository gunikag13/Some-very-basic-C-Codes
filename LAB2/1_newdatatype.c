#include<stdio.h>
void main(){
// learning basic datatypes
int integerVar= 3;
float floatVar= 2.345;
char charVar= 'A';

printf("intvariable=%d\n",integerVar);
printf("floatvariable=%f\n",floatVar);
printf("charvariable=%c\n",charVar);

printf("Size of Integer Variable:%lu bytes\n", sizeof(integerVar));
printf("Size of float Variable:%lu bytes\n", sizeof(floatVar));
printf("Size of character Variable:%lu bytes\n", sizeof(charVar));

}