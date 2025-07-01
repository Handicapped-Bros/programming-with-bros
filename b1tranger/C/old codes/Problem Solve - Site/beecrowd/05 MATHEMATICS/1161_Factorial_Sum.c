#include <stdio.h>

long long SUM(long long s)
{
    long long sum = 1;
    for(long long i = 2; i<=s;i++)
    {
        sum = sum*i;
    }
    return sum;
}

int main()
{
long long m,n,sum = 0, sum1 = 0, sum2 = 0;
int t;
scanf("%d",&t);
for(int i = 1; i <= t; i++)
{
    //printf("enter M: ");
    scanf("%lld",&m);
    //printf("enter N: ");
    scanf("%lld",&n);
    //printf("\nsum of factorial of M = %d\n",SUM(m));
    sum1 = SUM(m);
    sum2 = SUM(n);
    sum = sum1+sum2;
    printf("%lld\n",sum);
}

    return 0;
}
