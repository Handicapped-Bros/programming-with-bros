#include<stdio.h>

int main()
{
    int x;
    char ch;
    char n[100];
    printf("Loop how many times?\n");
    scanf("%d", &x);
    printf("Input character for matrix:\n");
    scanf("%c", &ch);
    printf("\nMAT:\n");

    for(int i = 1; i <=3; i++)
    {
        n[i] = ch+1;
        ch = ch+1;
    }
    for(int i = 1; i <=x; i++)
    {
        printf("%c ",n[i]);
        if(i%3==0)
        {
            printf("\n");
        }

    }

    return 0;
}
