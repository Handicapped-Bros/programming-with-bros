#include<stdio.h>

int main()
{
    int n;
    printf("Table for 1 to 5 till multiplication of?\n");
    scanf("%d", &n);
    printf("\nUsing For Loop, Table for 1 to 5 till multiplication of %d :\n\n", n);
    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=n; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j);
        }
        printf("\n\n");

    }
    return 0;
}
