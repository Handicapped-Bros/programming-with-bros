#include<stdio.h>

int main()

{
    int t,n[100],a[30],odd[10],cost[1000];
    float b[30];
    scanf("%d",&t);
    for(int i = 1; i<=t; i++)
    {
        scanf("%d%d%f",&n[i-1],&a[i-1],&b[i-1]);
    }
    for(int i = 1; i<=t; i++)
    {
        if(n[i-1]%2==0)
        {

            if(a[i-1]>b[i-1]/2)
            {
                cost[i-1] = (n[i-1]/2)*b[i-1];
            }
            else if(a[i-1]<b[i-1]/2)
            {
                cost[i-1] = n[i-1]*a[i-1];
            }

        }
        else
        {
            odd[i-1] = n[i-1]%2;
            if(n[i-1]*a[i-1]<(odd[i-1]*a[i-1]+(n[i-1]/2)*b[i-1]))
            {
               cost[i-1] = n[i-1]*a[i-1];
            }
            else
            {

                cost[i-1] = odd[i-1]*a[i-1]+(n[i-1]/2)*b[i-1];
            }
        }
    }
    for(int i = 1; i<=t; i++)
    {
        printf("%d\n",cost[i-1]);
    }


    return 0;
}

