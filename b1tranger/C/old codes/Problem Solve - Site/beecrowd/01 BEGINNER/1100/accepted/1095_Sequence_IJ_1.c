#include <stdio.h>

int main()
{
    for(int i = 1,j = 60; j>=0;i=i+3,j=j-5)
    {
        printf("I=%d J=%d\n",i,j);
    }

    return 0;
}
