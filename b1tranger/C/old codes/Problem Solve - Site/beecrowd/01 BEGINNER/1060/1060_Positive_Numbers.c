#include <stdio.h>

int main()
{
    int count = 0;
    float a[5];
    for(int i=0;i<=5;i++)
    {
        scanf("%f",&a[i]);
    }
    for(int i=0;i<=5;i++)
    {
        if(a[i] > 0)
        {
            count++;
        }
    }
    printf("%d valores positivos\n",count);


    return 0;
}

/*
Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.

Input
Six numbers, positive and/or negative.

Output
Print a message with the total number of positive numbers.

Input Sample	Output Sample
7
-5
6
-3.4
4.6
12

4 valores positivos
*/
