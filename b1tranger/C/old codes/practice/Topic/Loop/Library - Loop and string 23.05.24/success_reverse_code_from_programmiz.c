#include <stdio.h>

int main()
        {
            int x,rem,rev = 0;

            scanf("%d",&x); // 1234
            printf("Entered number was: %d\n",x);
           while(x!=0)
           {
               rem = x%10;
               rev = rev*10 + rem;
               x=x/10;
           }

              printf("reverse: %d\n",rev);
            return 0;
        }
