#include <stdio.h>

int main()
{
    float n,x,y;
    scanf("%f",&n);
    for(int i =1; i<=n; i++)
    {
        scanf("%f%f",&x,&y);
        if(y!=0)
            printf("%.1f\n",x/y);
        else
            printf("divisao impossivel\n");
    }

    return 0;
}
