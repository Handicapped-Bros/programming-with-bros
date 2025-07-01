#include <stdio.h>

int main()
{
    //int add(int N, int i, int count);
   int N, i,count = 0;
    scanf("%d", &N);
     int A[N];
    if (1 <= N && 1000 >= N)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            if (A[i] == 1)
            {
                printf("%d", count);
            }
            else
            {
                count++;
            }
        }
    }

    return 0;
}
