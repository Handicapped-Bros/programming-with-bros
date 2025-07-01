#include<stdio.h>

int main()
{
    int n,x,i,j;
    printf("Input how many times (min 9)?\n");
    scanf("%d", &n);
    int a[n];
    printf("Input numbers for 3x3 matrix:\n");
    for(int i = 1; i <=n; i++)
    {
        scanf("%d", &x);
        a[i] = x;
    }
    printf("MAT:\n\n");
    for(i = 1; i <=n; i++)
    {
        if(i<=3)
        {
            //printf("\n");
            printf("%d ",a[i]);
            if(i==3)
            {
                printf("\n");
            }
        }
        else if(i<=6 && i>3)
        {
            printf("%d ",a[i]);
            if(i==6)
            {
                printf("\n");
            }
        }
        else if(i<=9 && i>6)
        {
            printf("%d ",a[i]);

        }
    }
    return 0;
}
