#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    for(int i = 1; i<=N; i++)
    {
        int count = 0;
        for(int j = i; count <3;)
        {
            count++;
            if(count == 1)
            {
                printf("%d ",j);
            }
            else if(count == 2)
            {
                printf("%d ",j*j);
            }
            else if(count == 3)
            {
                printf("%d ",j*j*j);
            }

        }
        printf("\n");
    }


    return 0;
}
