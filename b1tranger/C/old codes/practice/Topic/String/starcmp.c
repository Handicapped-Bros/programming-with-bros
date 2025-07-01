#include<stdio.h>
#include<string.h>

int main()
{
    //char tmp1[] = "what is up";
    char tmp2[] = "I am fine";
    char tmp1[100];
    gets(tmp1);
    //strupr(tmp1);
    //strrev(tmp1);
    printf("%d",strcmp(tmp1,tmp2));

    //printf("%s",tmp1);
//puts(tmp1);

    return 0;
}

