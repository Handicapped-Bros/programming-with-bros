#include <stdio.h>

int main()
{
    int n,tmp;
    printf("Input a number:\n");
    scanf("%d",&n);
    while(1)
    {
        printf("Input the next number:\n");
        scanf("%d",&n);
        if(tmp==n)
        {
            break;
        }
        else
        {
            tmp=n;
        }
    }
    printf("Duplicate Found!!\n");
    return 0;
}
