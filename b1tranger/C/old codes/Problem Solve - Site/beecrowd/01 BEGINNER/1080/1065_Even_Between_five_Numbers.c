#include <stdio.h>

int main()
{
    int X[5],count = 0;
    for(int i = 1; i<=5;i++)
    {
    scanf("%d",&X[i]);
    if(X[i]%2==0)
        {
            count++;
        }
    }
        printf("%d valores pares\n",count);

    return 0;
}
