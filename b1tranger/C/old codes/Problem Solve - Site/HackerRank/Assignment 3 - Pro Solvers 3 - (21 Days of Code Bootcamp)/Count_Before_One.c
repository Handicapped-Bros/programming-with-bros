#include <stdio.h>

count_before_one();

int count_before_one(int i, int N, int A[N], int count)
{
    for (i = 0; i < N; i++)

    {
        if (A[i] == 1)
        {
            printf("%d", count);
        }
        else
        {
            count++;
        }
    }
    // size = sizeof(A[N]);
    return count;
}

int main()
{
    // int add(int N, int i, int count);
    int N, i, count = 0, size = 0;
    scanf("%d", &N);
    int A[N];
    if (1 <= N && 1000 >= N)
    {
        for (i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        count_before_one(i, N, A[N], count);
    }

    return 0;
}
