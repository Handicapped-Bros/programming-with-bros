#include <stdio.h>

int main()
{
    int count = 0;
    float x,sum = 0;
    while(count!=2)
    {
        scanf("%f",&x);
        if(x>=0 && x<=10)
        {
            count++;
            sum = sum+x;
        }
        else
        {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n",sum/2);
    return 0;
}
