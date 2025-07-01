#include <stdio.h>

int main()
{
    int T,N,a,b,x1,x2,count,tmp1,tmp2;
    scanf("%d",&T);
    for(int i =1; i<=T; i++)
    {
        count = 0;
        scanf("%d%d%d",&N,&a,&b);
        //x1 = 0,x2 = 0;
        for(int x1 = 0;  )


        printf("%d\n",count);
    }
    return 0;
}

/*
        while(x1*a+b*x2<=N)
        {
            printf("%d %d\n",x1,x2);
            tmp1 = x1, tmp2 = x2;
//printf("%d %d\n",x1,x2);
//count++;
            for(x1; x1*a+b*x2<=N; x1++)
            {
                count++;
            }
            printf("%d %d\n",x1,x2);
            x1 = tmp1,x2 = tmp2;
            for(x2; x1*a+b*x2<=N; x2++)
            {;
                count++;
            }
            printf("%d %d\n",x1,x2);
            x1 = tmp1,x2 = tmp2;

            x1++,x2++;
        }
        */


/*

for(int i =1;i<=T;i++)
    {
        count = 0;
        scanf("%d%d%d",&N,&a,&b);
        x1 = 0,x2 = 0;
    for(x1; x1*a+b*x2<=N;x1++)
    {
printf("%d %d\n",x1,x2);
        count++;
    }
    x1 = 0,x2 = 0;
    for(x2; x1*a+b*x2<=N;x2++)
    {
        printf("%d %d\n",x1,x2);
        count++;
    }

    */


/*

 for(x1 = 0,x2 = 0; x1*a+b*x2<=N;x1++)
    {
            for(x1 = 0,x2 = 0; x1*a+b*x2<=N;x2++)
    {
        count++;
        printf("%d %d\n",x1,x2);
    }
    }

*/

