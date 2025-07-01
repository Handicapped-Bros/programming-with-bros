#include<stdio.h>

int main()
{
    float a[6]; //count starts from 1. (like a[1])
    float tmp;
    int i, j;
    int b[6];

for(i=0; i<6 ; i++)
{
scanf("%f", &a[i]);
}
for(i=0; i<6 ; i++)
{
scanf("%d", &b[i]);
}
    
    for(i=0; i<6 ; i++) //addressing an index starts from 0. (like a[0])
    {
    tmp = a[i]*b[5-i];
    printf("%.2f\n", tmp); 
    }
return 0;

}

/*
Build a program that has two arrays where the size of each array is 6 to store
floating point and integer numbers. Later, the program multiplies each index
element of the first array with each index element of the second array, but in the
opposite order of the second array's indexes.*/