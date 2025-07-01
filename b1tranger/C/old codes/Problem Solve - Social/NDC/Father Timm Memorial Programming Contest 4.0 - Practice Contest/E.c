#include <stdio.h>

int main()
{
    int T,n,count,flag;
    scanf("%d",&T);
    for(int i =1; i<=T; i++)
    {
        count = 0;
        flag = 1;
        scanf("%d",&n);
        int a[n];
        for(int i =1; i<=n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i =1; i<n; i++)
        {
            if(a[i]-a[i+2]==1 || a[i+2]-a[i]==1)
            {
                if()
                count++;
            }
            else
            {
                flag = -1;
            }
        }
        if(flag==1)
        {
            printf("%d",count);
        }
        else
        {
            printf("%d",flag);
        }



    }
    return 0;
}
