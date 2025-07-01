#include<stdio.h>

int main()
{
    int n;
    float x,y;
    printf("Find operations for how many times?\nInput:\n");
    scanf("%d", &n);
    for(int i = 1; i <=n; i++)
    {
        printf("Input numbers for operations:\n");
        scanf("%f%f", &x,&y);
        printf("\nsum = %.2f\nmultiplication = %.2f\ndivision = %.2f\n", x+y,x*y,x/y);
    }
    return 0;
}
