#include<stdio.h>

int main()
{

    float num1, num2, num3, sum, sub, mul, div;
    printf("Enter the first number:");
    scanf("%f", &num1);

    printf("Enter the second number:");
    scanf("%f", &num2);

    printf("Enter the third number:");

    scanf("%f", &num3);

    sum=num1+num2+num3;

    sub=num1-num2-num3;

    mul=num1*num2*num3;

    div=num1/num2/num3;

    printf("summation:%f\n",sum);

    printf("subtraction: %f\n", sub);

    printf("multiplication: %f\n",mul);

    printf("division:%f\n",div);

    return 0;

    }

