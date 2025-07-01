#include <stdio.h>

int main()
{
    int N,A[N],max,min,max1,min1;
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    max = A[0];

    for(int i = 1; i<N; i++)
    {
        if(max<A[i])
        {
            max = A[i];
        }
    }
    min = A[0];

    for(int i = 1; i<N; i++)
    {
        if(min>A[i])
        {
            min = A[i];
        }
    }



    return 0;
}
