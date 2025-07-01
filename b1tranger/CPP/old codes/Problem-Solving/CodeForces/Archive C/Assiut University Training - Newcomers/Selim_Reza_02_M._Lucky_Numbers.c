#include <stdio.h>

int main()
{
    int A,B;
    scanf("%d %d",&A, &B);
    if(A==4 || A==7 || A == 47 || A==744 || B==4 || B==7 || B == 47 || B==744)
    {
        if(A>=4 && B>=7)
        {
            printf("4 7\n");
        }
        else if(A>=4 && B>=47)
        {
            printf("4 47\n");
        }
        else if(A>=4 && B>=744)
        {
            printf("4 744\n");
        }
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
