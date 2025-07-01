#include <stdio.h>
#include <string.h>

int main()
        {
            char ch[100];
            int x;
            gets(ch);
            x = strlen(ch);
            printf("length of the string: %d\n",x);
            for(int i = 0;i<=x+1;i++)
            {
                if(ch[i]=='\0')
                {
                    printf("NULL at %d\n",i+1);
                }
            }
           // printf("\ninput was:\n%s\n",ch);
            return 0;
        }
