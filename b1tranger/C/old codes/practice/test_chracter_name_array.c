#include <stdio.h>


int main()
{
    //char a[10];char b[10];char c[10];
    //scanf("%s %s %s", &a, &b, &c);


char name[30];
fgets(name, sizeof(name), stdin);
    //printf("\n\n\nYour said your name was %s %s %s",a,b,c);
    printf("\n\n\nYour said your name was %s",name);
    return 0;


}
