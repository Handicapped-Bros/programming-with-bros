#include<stdio.h>

int main()
{
    int T;
    long long N;
    scanf("%d",&T);
    for(int i = 1; i<=T; i++)
    {
    scanf("%lld",&N);
    if(N%4==0)
    {
    int tmp = N/4;
    if(tmp%2!=0)
    {
    printf("yes\n");
    }
    else
    {
    printf("no\n");
    }
    }
    }
    
    
    
return 0;
}
