#include<stdio.h>

int main()
{
    int sum = 0, i = 2;
    while(i<=1000)
    {
        if(i%2!=0)
        {
            sum = sum + i;
        }
        i++;

    }
printf("%d",sum);
    return 0;
}
