#include <stdio.h>
#include <math.h>

int main()
{

    printf("input n:\n");
    int n, lastD, digits=1, sum, i;
    scanf("%d",&n);

    printf("Armstrong number between 1 to n are: \n");

    for(int i = 1;i<=n;i++)
    {
        sum = 0;
        int tmp = i;
    while(i/10!=0)
    {
        digits++;
        i=i/10;
    }
    i = tmp;
    while(i>0)
    {
        lastD = i%10;
        sum = sum + pow(lastD,digits);
        i=i/10;
    }

    if(i==sum)
    {
        printf("%d ",i);
    }
    //printf("digits = %d\n",digits);
    }



    return 0;
}
