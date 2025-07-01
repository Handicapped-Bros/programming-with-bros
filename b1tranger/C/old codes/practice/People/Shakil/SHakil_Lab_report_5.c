#include <stdio.h>

int main()
{
    int n,i;
    for(n=1; n<=20; n++)
        //for(n=1,i=1; n<=20; n++,i++)
    {
        for(i=2; i<=n; i++)
        {
            /*if(n/i<2*i)
            {
                printf("prime number= %d\n",n);
                break;
            }*/
            if(n%i==0)
            {
                break;
            }
            else
            {
                printf("prime number= %d\n",n);
                break;
            }
        }
    }
}
return 0;
}
