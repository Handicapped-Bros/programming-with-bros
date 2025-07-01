#include <stdio.h>
#include <string.h>

int main()
{
char sentence[100];
scanf(" %[^\n]",sentence); //space before % seems necessary
printf("%s\n",sentence);
    return 0;
}
