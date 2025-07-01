#include<stdio.h>

int max(int num[], int size)
{
    int max1 = num[0];
    for(int i = 0; i<3; i++)
    {
        if(num[i]>max1)
        {
            max1 = num[i];
        }
    }
    return max1;
}

int min(int num[], int size)
{
    int min1 = num[0];
    for(int i = 0; i<3; i++)
    {
        if(num[i]<min1)
        {
            min1 = num[i];
        }
    }
    return min1;
}

int sum(int n)
{
    int sum1 = 0;
    for(int i = 1; i <= n; i++)
    {
        sum1 = sum1 + i;
    }
    return sum1;
}

int sumE(int n)
{
    int sum1 = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i%2==0)
        {
            sum1 = sum1 + i;
        }
    }
    return sum1;
}

int main()
{
    printf("\n# Set A:\n");
    printf("input 3 values:\n");
    int num[3];
    int size = sizeof(num) / sizeof(num[0]);
    for(int i = 0; i<3; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("\nmaximum value is %d\n",max(num,size));

    printf("\n# Set B:\n");

    printf("\nminimum value is %d\n",min(num,size));

    printf("\n# Set C:\n");

    printf("Input n to find sum of even numbers from 1 to n:\n");
    int n;
    scanf("%d",&n);
    printf("\n\nsum of even numbers from 1 to n is %d",sumE(n));
    printf("\n# Set D:\n");
    printf("\n\nsum of numbers from 1 to n is %d\n",sum(n));

    return 0;
}

