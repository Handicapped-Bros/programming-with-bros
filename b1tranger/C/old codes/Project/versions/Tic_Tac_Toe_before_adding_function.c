#include <stdio.h>

int main()
{
//Initial Idea: I'll first try without using matrix. For that, I'll take numpad as input, and their location will alternate the inputs between 0 and 1. There will be a count of inputs and when that reaches 9, or when all the buttons of the numpad have been pressed, the game ends.

    int x[10],n[10], count = 0,tmp,x1,n1;
    printf("Here's the outline for the game inputs:\n\n\t7\t%|\t8\t%|\t9\n\t_\t\t_\t\t_\n\n\t4\t%|\t5\t%|\t6\n\t_\t\t_\t\t_\n\n\t1\t%|\t2\t%|\t3\n\n (please enter the moves according to the outline)\n\n[ NB: First entry will be 0 ]\n\n");
    for(int i = 1; count<=9; i++)
    {
        printf("_______________________________________________\n\n");
g:
        printf("\nPlayer %d, please enter your move: ",i);
        scanf("%d",&x[i]);
        n[i]=x[i];
        //tmp = n[i];
        for(int j = 1; j<i; j++)
        {
            if(x[i]==n[j])
            {
                printf("\nInvalid entry, please enter again!!");
                goto g;
            }
        }
        count++;
        printf("\n[test]Count is = %d\n",count);
        if(count%2!=0)
        {
            x[i]= 0;
        }
        else
        {
            x[i]= 1;
        }
printf("\n[test] x is = %d\n",x[i]);
x1=x[i];
n1=n[i];

        if(n[i]==1)
        {
            //\n\n\t7\t%|\t8\t%|\t9\n\t_\t\t_\t\t_\n\n\t4\t%|\t5\t%|\t6\n\t_\t\t_\t\t_\n\n\t1\t%|\t2\t%|\t3\n\n
            printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,32,32,32,32,x[i],32,32);
        }
        else if(n[i]==2)
        {
            printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,32,32,32,32,32,x[i],32);
        }
        else if(n[i]==3)
        {
            printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,32,32,32,32,32,32,x[i]);
        }
        else if(n[i]==4)
        {
            printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,x[i],32,32,32,32,32);
        }
        else if(n[i]==5)
        {
            printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,32,x[i],32,32,32,32);
        }
        else if(n[i]==6)
        {
            printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,32,32,x[i],32,32,32);
        }
        else if(n[i]==7)
        {
            printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[i],32,32,32,32,32,32,32,32);
        }
        else if(n[i]==8)
        {
            printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[i],32,32,32,32,32,32,32);
        }
        else if(n[i]==9)
        {
            printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,x[i],32,32,32,32,32,32);
        }

    }

    return 0;
}
