#include<stdio.h>

int main()
{
    float a[8];
    int i;
    float sum, avg, multiple;

printf("Print 4 integer numbers: ");
for(i=0; i<4 ; i++)
{
scanf("%f", &a[i]);
}
printf("\n\nPrint 4 floating point numbers: ");
for(i=4; i<8 ; i++)
{
scanf("%f", &a[i]);
}

sum = a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7];
avg = (a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7])/8;
multiple = a[0]*a[1]*a[2]*a[3]*a[4]*a[5]*a[6]*a[7];

printf("Summation is %.2f\nAverage is %.2f\nMultiplication is %.2f\n", sum, avg, multiple);







return 0;

}

/*

2. Develop a program that has an array which stores 4 integer numbers and 4 floating point
numbers by asking the user for inputs. The program estimates the summation, average as
well as multiplication of the stored numbers and prints all the results.


*/
