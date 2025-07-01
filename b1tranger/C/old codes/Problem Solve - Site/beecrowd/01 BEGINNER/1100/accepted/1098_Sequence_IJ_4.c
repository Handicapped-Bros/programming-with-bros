#include <stdio.h>
#include<math.h>

int main()
{
    double i,j,k=1,n,m,x,y;
    for(i = 0 ; i<=2; i=0.2+i)
    {
        n=modf(i,&m);////

        for(j= 1 + i; k<=3; j++)
        {
            k++;
            x=modf(j,&y);
            if(n==0 || x==0)/////
            {
                printf("I=%.0lf J=%.0lf\n",i,j);
            }
            else
            {
                printf("I=%.1lf J=%.1lf\n",i,j);
            }
        }
        k=1;
    }

    return 0;
}
