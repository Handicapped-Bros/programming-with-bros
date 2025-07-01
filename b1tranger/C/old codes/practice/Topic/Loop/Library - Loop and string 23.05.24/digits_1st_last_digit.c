#include <stdio.h>

int main()
        {
            int x,tmp,rem,rev = 0,digits = 1;///// 1

            scanf("%d",&x); // 1234
            tmp =x;
            printf("Entered number was: %d\n",x);
            //find digits
            while(x/10!=0)
            {
                digits++;
                x=x/10;
            }
            printf("digits: %d\n",digits);
            printf("1st digit: %d\n",x);
x=tmp;
printf("last digit: %d\n",x%10);
            //find reverse
            /*
            x = tmp;
           while(x!=0)
           {
               rem = x%10;
               rev = rev*10 + rem;
               x=x/10;
           }

              printf("reverse: %d\n",rev);*/
           //   printf("%d\n");
            return 0;
        }
