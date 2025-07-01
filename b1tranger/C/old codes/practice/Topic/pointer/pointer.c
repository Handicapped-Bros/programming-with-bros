#include <stdio.h>

int main()
{
int age = 30;
int *pAge = &age;
printf("%d\n",*pAge); //value (dereferencing)
printf("%d\n",pAge); //address
printf("%d\n",age); //value (dereferencing)
printf("%d\n",&age); //address
printf("%p\n",pAge); //address in Hex
printf("%p\n",*pAge); //value in Hex
printf("%p\n",age); //value in Hex
printf("%p\n",&age); //address in Hex
printf("%p\n",*&*&age); //value in Hex
printf("%p\n",&*&age); //address in Hex
printf("%p\n",*&age); //value in Hex
//printf("%p\n",*age); //error: invalid type argument of unary '*' (have 'int')

    return 0;
}
