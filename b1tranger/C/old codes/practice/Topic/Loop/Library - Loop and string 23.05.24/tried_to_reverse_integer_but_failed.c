#include <stdio.h>

int main()
        {
            int x[100],tmp1,tmp2,tmp3,digits = 0;

            scanf("%d",&x[0]); // 1234
            printf("Entered number was: %d\n",x[0]);
            for(int i = 1;x[0]%10==0;i++)
            {
                digits++;
                x[i] = x[0]%10;
                x[0]=x[0]%10;
            }
              printf("digits: %d\n",digits);
              printf("Swapped number: \n");
            for(int i = 1;i<=digits;i++)
            {
              printf("%d",x[i]);
            }
              printf("\n");
            return 0;
        }
