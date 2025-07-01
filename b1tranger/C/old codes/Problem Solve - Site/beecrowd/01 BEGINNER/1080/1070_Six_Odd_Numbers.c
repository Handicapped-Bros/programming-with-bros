#include <stdio.h>

int main()
{
    long long N,in =0,out =0;
    scanf("%lld",&N);
    long long a[N];
    for(int i = 1; i<=N; i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<=20 && a[i]>=10)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%lld in\n%d out\n",in,out);


    return 0;
}
