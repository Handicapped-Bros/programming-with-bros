#include<stdio.h>

int main()
{
    int x = 1,count;
    double x1,x2,x3;
    while(x==1)
    {
        count = 1;
        while(count<=2)
        {
            scanf("%lf",&x1);
            if(x1>=0 && x1<=10)
            {
                if(count==1)
                {
                    x2 = x1;
                }
                else if(count==2)
                {
                    x3 = x1;
                }
                count++;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2lf\n",(x2+x3)/2);

        do
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
        }while(x==1 || x==2);

    }
    return 0;
}

