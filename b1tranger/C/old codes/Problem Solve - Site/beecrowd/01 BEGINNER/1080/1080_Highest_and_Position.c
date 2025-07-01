#include <stdio.h>

int main()
{
    int a[100],max=0,pos = 0;
    for(int i = 1; i<=100;i++)
    {
        scanf("%d",&a[i]);
    }
    max = a[1];

    for(int i = 1; i<=100;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            pos = i;        }
    }
    printf("%d\n%d\n",max,pos);

    return 0;
}
