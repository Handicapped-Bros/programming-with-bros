#include<stdio.h>

int main()
{
    int x,a[10];
    printf("Loop 5 Line Matrices with odd numbers 1-10 for how many times?\nInput:\n");
    scanf("%d", &x);
    for(int i = 1; i <=x; i++)
    {

        printf("\nLoop no. %d:\n\n", i);
        for(int j=1; j<=5; j++)
        {
            //printf("MAT:\n");
            for(int k = 1; k<=10; k++)
            {
                if(k%2!=0)
                {
                    printf("%d ",k);
                }

            }
            printf("\n");
        }
    }
    return 0;
}
