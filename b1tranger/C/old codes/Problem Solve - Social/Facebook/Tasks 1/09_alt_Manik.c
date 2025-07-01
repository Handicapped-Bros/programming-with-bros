#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < rows; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 0; i < rows; i++)
    {
        for (int j = 5; j > i; j--)
        {
            if((i+j)%2==0) //1+1 (even) 1+2 (odd)
            {
                printf("+ ");
            }
            else
            {
                printf("* ");
            }

        }
        printf("\n");
    }
    return 0;
}
