#include<stdio.h>

int main()
{
    int n,x;
    printf("Loop for how many times?\nInput:\n");
    scanf("%d", &n);
    for(int i = 1; i <=n; i++)
    {
        printf("Input a number for Line Matrices:\n");
        scanf("%d", &x);
        printf("MAT:\n\n%d %d %d\n%d %d %d\n%d %d %d\n\n",x,x,x,x,x,x,x,x,x);
    }
    return 0;
}
