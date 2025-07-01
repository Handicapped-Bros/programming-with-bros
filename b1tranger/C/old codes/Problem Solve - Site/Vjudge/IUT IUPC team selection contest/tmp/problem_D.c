#include<stdio.h>

int main()
{
    long long N,X,count = 0;
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        scanf("%lld",&X);
        count = 0;

        if(X==1)
        {
            printf("-1\n");
        }
        else if(X%10==0)
        {
            printf("%lld\n",count);
        }
        else if(X%10!=0)
        {
            while(X%10!=0)
            {
                X=X*2;
                count++;
            }
            printf("%lld\n",count);

        }

    }

    return 0;
}
