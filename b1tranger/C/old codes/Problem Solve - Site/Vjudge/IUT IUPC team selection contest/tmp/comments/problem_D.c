#include<stdio.h>

int main()
{
    int N,X,count = 0,tmp;
    scanf("%d",&N); //initial number

    for(int i=1; i<=N; i++)
    {
        scanf("%d",&X);
        count = 0;
        //count++;

        if(X==1)
        {
            printf("-1\n");
        }
        else if(X%10==0)
        {
            printf("%d\n",count);
        }
        else if(X%10!=0)
        {
            while(X%10!=0)
                {
                    X=X*2;
                    count++;
                }
                printf("%d\n",count);
            /*tmp = X;
            if(X*2==tmp)
            {
                printf("-1\n");
            }
            else
            {
                while(X%10!=0)
                {
                    X=X*2;
                    count++;
                }
                printf("%d\n",count);
            }*/




        }

    }
    //printf("%d",count);

        return 0;
    }
