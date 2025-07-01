#include <stdio.h>

int main()
{
    int T;
    long long N,P;
    scanf("%d",&T);
    for(int i=1; i<=T ; i++)
    {
        scanf("%lld",&N);
        int tmp = N/10;
        if(N%100==0)
        {
        P = N+10; 
        }
        else if(tmp%10==0)
        {
        P= N;
        }
        else
        {
        while(N%10!=0)
        {
        N=N+1;
        P=N;
        }
        }
        printf("%lld\n",P);
    }
    return 0;
}
