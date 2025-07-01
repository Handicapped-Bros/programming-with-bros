#include <stdio.h>

int main()
{
int N,k = 1;
scanf("%d",&N);
for(int i = 1;i<=N;i++)
{
    int count = 1;
    for(int j = k;count<=3;k++)
    {
        count++;
        printf("%d ",k);
    }
    k++;
    printf("PUM\n");
}


    return 0;
}
