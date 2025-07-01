#include <stdio.h>

int main()
{
    int N,num, sum = 0, sum1 =0, sum2=0,sum3=0;
    char ch[100];
    scanf("%d",&N);
    for(int i = 1; i<=N; i++)
    {
        scanf("%d", &num);
        scanf("%s", &ch);
        if(ch=="C")
        {
            sum1=sum1+num;
        }
        else if(ch=="R")
        {
            sum2=sum2+num;
        }
        else if(ch=="S")
        {
            sum3=sum3+num;
        }
    }
    sum = sum1+sum2+sum3;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",sum,sum1,sum2,sum3);
    printf("Percentual de coelhos: %d %%\nPercentual de ratos: %d %%\nPercentual de sapos: %d %%\n",sum1*100/sum,sum2*100/sum,sum3*100/sum);

    return 0;
}
