#include<stdio.h>

int main()
{
    int n;
    printf("Table for 6 to 10 till multiplication of?\n");
    scanf("%d", &n);
    printf("\nUsing While Loop, Table for 1 to 5 till multiplication of %d :\n\n", n);
    int i = 6;
    while(i<=10)
    {
        int j=1;
        while(j<=n)
        {
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        }
        printf("\n\n");
        i++;

    }
    return 0;
}
