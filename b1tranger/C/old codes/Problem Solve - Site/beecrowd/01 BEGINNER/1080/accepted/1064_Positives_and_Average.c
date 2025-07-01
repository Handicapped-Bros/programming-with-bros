#include <stdio.h>

int main()
{
    float a[6],sum = 0,avg;
    int count = 0;
    for(int i =1;i<=6;i++)
    {
        scanf("%f",&a[i]);
    }
    for(int i =1;i<=6;i++)
    {
        if(a[i]>0)
        {
            count++;
            sum = sum +a[i];
        }

    }
    avg = sum/count;
    printf("%d valores positivos\n%.1f\n",count,avg);




    return 0;
}

/*

Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.

Input
The input consist in 6 numbers that can be integer or floating point values. At least one number will be positive.

Output
The first output value is the amount of positive numbers. The next line should show the average of the positive values ​typed.

Input Sample	Output Sample
7
-5
6
-3.4
4.6
12

4 valores positivos
7.4

*/
