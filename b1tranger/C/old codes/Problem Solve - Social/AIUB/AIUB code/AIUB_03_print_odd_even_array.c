#include<stdio.h>

int main()
{
    int a[5];
    scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    for(int i=0;i<5;i++)

    {
        if(a[i]%2==0)
        {a[i]=0; //replacing even number with 0
        printf("%d",a[i]);
        } 
        else
        {
            a[i]=1; //replacing odd number with 1
            printf("%d",a[i]);
        }
    }



return 0;

}

