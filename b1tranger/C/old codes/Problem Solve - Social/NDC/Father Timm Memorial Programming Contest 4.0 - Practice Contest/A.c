#include <stdio.h>


int main()
{
    char name[30];
    int x;
    scanf("%s",name);
    //printf("")
    x = name[0];
    printf("%d",x);
    if(name[0]<9 && name[0]>=1)
    {
        printf("%sffy",name[0]+1);
    }


    return 0;
}

