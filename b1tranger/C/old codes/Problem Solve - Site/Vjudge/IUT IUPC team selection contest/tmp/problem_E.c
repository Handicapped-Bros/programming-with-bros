#include<stdio.h>

int main()
{
    int T,N,K,i,j,a[100],sum=0;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d",&N,&K);
        for(j=1; j<=N; j++)
        {
            scanf("%d",&a[j]);
        }
    }

    for(i=1; i<=N; i++)
    {
//printf("%d\n",a[i]);
        if(a[i]<=N && a[i]>=N)
        {
            sum = sum + a[i];
        }
        else
        {
            continue;
        }

    }
    printf("%d",sum);

    return 0;
}
