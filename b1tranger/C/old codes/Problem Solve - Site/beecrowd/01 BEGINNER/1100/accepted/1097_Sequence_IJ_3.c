#include <stdio.h>

int main()
{
    int k = 7;
    for(int i = 1; i<=9;i=i+2)
    {
        for(int j = k;j >= k-2;j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        k = k+2;
    }

    return 0;
}
