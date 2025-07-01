#include <stdio.h>
//\n\n\t7\t%|\t8\t%|\t9\n\t_\t\t_\t\t_\n\n\t4\t%|\t5\t%|\t6\n\t_\t\t_\t\t_\n\n\t1\t%|\t2\t%|\t3\n\n
//32 is ASCII of space letter

int main()
{
//Initial Idea: I'll first try without using matrix. For that, I'll take numpad as input, and their location will alternate the inputs between 0 and 1. There will be a count of inputs and when that reaches 9, or when all the buttons of the numpad have been pressed, the game ends.

    int x[10],n[10],t[10], count = 0,tmp,x1,n1;
    printf("Here's the outline for the game inputs:\n\n\t7\t%|\t8\t%|\t9\n\t_\t\t_\t\t_\n\n\t4\t%|\t5\t%|\t6\n\t_\t\t_\t\t_\n\n\t1\t%|\t2\t%|\t3\n\n (please enter the moves according to the outline)\n\n\t[ NB: First entry will be 0 ]\n\n");
    for(int i = 1; count<=9; i++)
    {
        printf("_______________________________________________\n\n");
g:
        printf("\nPlayer %d, please enter your move: ",i);
        scanf("%d",&x[i]);
        n[i]=x[i];
        for(int j = 1; j<i; j++)
        {
            if(x[i]==n[j])
            {
                printf("\nInvalid entry, please enter again!!");
                goto g;
            }
        }
        count++;
        printf("\n[test] Count is = %d\n",count);
        if(count%2!=0)
        {
            x[i]= 0;
        }
        else
        {
            x[i]= 1;
        }
        printf("\n[test] x is = %d\n",x[i]);
        //x1=x[i];
        //n1=n[i];
        t[count]=n[i];
        if(count == 1)
        {
            if(t[1]==1)
            {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,32,32,32,32,x[1],32,32);
            }
            else if(t[1]==2)
            {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,32,32,32,32,32,x[1],32);
            }
            else if(t[1]==3)
            {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,32,32,32,32,32,32,x[1]);
            }
            else if(t[1]==4)
            {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,x[1],32,32,32,32,32);
            }
            else if(t[1]==5)
            {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,32,x[1],32,32,32,32);
            }
            else if(t[1]==6)
            {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,32,32,x[1],32,32,32);
            }
            else if(t[1]==7)
            {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[1],32,32,32,32,32,32,32,32);
            }
            else if(t[1]==8)
            {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[1],32,32,32,32,32,32,32);
            }
            else if(t[1]==9)
            {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,x[1],32,32,32,32,32,32);
            }
        }

        else if(count == 2)
        {
            if(t[1]==1)
            {
                if(t[2]==2)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%d\t%|\t%c\n\n",32,32,32,32,32,32,x[1],x[2],32);
                }
                else if(t[2]==3)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%d\n\n",32,32,32,32,32,32,x[1],32,x[2]);
                }
                else if(t[2]==4)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,32,x[2],32,32,x[1],32,32);
                }
                else if(t[2]==5)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,32,32,x[2],32,x[1],32,32);
                }
                else if(t[2]==6)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,32,32,32,x[2],x[1],32,32);
                }
                else if(t[2]==7)
                {
                    printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",x[2],32,32,32,32,32,x[1],32,32);
                }
                else if(t[2]==8)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,x[2],32,32,32,32,x[1],32,32);
                }
                else if(t[2]==9)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,x[2],32,32,32,x[1],32,32);
                }
            }
            else if(t[1]==2)
            {
                if(t[2]==1)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%d\t%|\t%c\n\n",32,32,32,32,32,32,x[2],x[1],32);
                }
                else if(t[2]==3)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%d\n\n",32,32,32,32,32,32,32,x[1],x[2]);
                }
                else if(t[2]==4)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,32,x[2],32,32,32,x[1],32);
                }
                else if(t[2]==5)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,32,32,x[2],32,32,x[1],32);
                }
                else if(t[2]==6)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,32,32,32,x[2],32,x[1],32);
                }
                else if(t[2]==7)
                {
                    printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",x[2],32,32,32,32,32,32,x[1],32);
                }
                else if(t[2]==8)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,x[2],32,32,32,32,32,x[1],32);
                }
                else if(t[2]==9)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,x[2],32,32,32,32,x[1],32);
                }
            }
            else if(t[1]==3)
            {
                if(t[2]==1)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%d\n\n",32,32,32,32,32,32,x[2],32,x[1]);
                }
                else if(t[2]==2)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%d\n\n",32,32,32,32,32,32,32,x[2],x[1]);
                }
                else if(t[2]==4)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,32,x[2],32,32,32,32,x[1]);
                }
                else if(t[2]==5)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,32,32,x[2],32,32,32,x[1]);
                }
                else if(t[2]==6)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,32,32,32,x[2],32,32,x[1]);
                }
                else if(t[2]==7)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",x[2],32,32,32,32,32,32,32,x[1]);
                }
                else if(t[2]==8)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,x[2],32,32,32,32,32,32,x[1]);
                }
                else if(t[2]==9)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,x[2],32,32,32,32,32,x[1]);
                }
            }
            else if(t[1]==4)
            {
                if(t[2]==1)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,32,x[1],32,32,x[2],32,32);
                }
                else if(t[2]==2)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,32,x[1],32,32,32,x[2],32);
                }
                else if(t[2]==3)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,32,x[1],32,32,32,32,x[2]);
                }
                else if(t[2]==5)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,x[1],x[2],32,32,32,32);
                }
                else if(t[2]==6)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,x[1],32,x[2],32,32,32);
                }
                else if(t[2]==7)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[2],32,32,x[1],32,32,32,32,32);
                }
                else if(t[2]==8)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[2],32,x[1],32,32,32,32,32);
                }
                else if(t[2]==9)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,x[2],x[1],32,32,32,32,32);
                }
            }
            else if(t[1]==5)
            {
                if(t[2]==1)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,32,32,x[1],32,x[2],32,32);
                }
                else if(t[2]==2)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,32,32,x[1],32,32,x[2],32);
                }
                else if(t[2]==3)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,32,32,x[1],32,32,32,x[2]);
                }
                else if(t[2]==4)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,x[2],x[1],32,32,32,32);
                }
                else if(t[2]==6)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,32,x[1],x[2],32,32,32);
                }
                else if(t[2]==7)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[2],32,32,32,x[1],32,32,32,32);
                }
            else if(t[2]==8)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[2],32,32,x[1],32,32,32,32);
                }
                else if(t[2]==9)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,x[2],32,x[1],32,32,32,32);
                }
        }
            else if(t[1]==6)
            {
                if(t[2]==1)
                {
                        printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,32,32,32,x[1],x[2],32,32);
                }
                else if(t[2]==2)
                {
                        printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,32,32,32,x[1],32,x[2],32);
                }
                else if(t[2]==3)
                {
                        printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,32,32,32,32,x[1],32,32,x[2]);
                }
                else if(t[2]==4)
                {
                        printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,x[2],32,x[1],32,32,32);
                }
                else if(t[2]==5)
                {
                        printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,32,32,x[2],x[1],32,32,32);
                }
                else if(t[2]==7)
                {
                        printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[2],32,32,32,32,x[1],32,32,32);
                }
                else if(t[2]==8)
                {
                        printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[2],32,32,32,x[1],32,32,32);
                }
                else if(t[2]==9)
                {
                        printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,x[2],32,32,x[1],32,32,32);
                }
            }
            else if(t[1]==7)
            {
                if(t[2]==1)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",x[1],32,32,32,32,32,x[2],32,32);
                }
                else if(t[2]==2)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",x[1],32,32,32,32,32,32,x[2],32);
                }
                else if(t[2]==3)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",x[1],32,32,32,32,32,32,32,x[2]);
                }
                else if(t[2]==4)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[1],32,32,x[2],32,32,32,32,32);
                }
                else if(t[2]==5)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[1],32,32,32,x[2],32,32,32,32);
                }
                else if(t[2]==6)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[1],32,32,32,32,x[2],32,32,32);
                }
                else if(t[2]==8)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[1],x[2],32,32,32,32,32,32,32);
                }
                else if(t[2]==9)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[1],32,x[2],32,32,32,32,32,32);
                }
            }
            else if(t[1]==8)
            {
                if(t[2]==1)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,x[1],32,32,32,32,x[2],32,32);
                }
                else if(t[2]==2)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,x[1],32,32,32,32,32,x[2],32);
                }
                else if(t[2]==3)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\n",32,x[1],32,32,32,32,32,32,x[2]);
                }
                else if(t[2]==4)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[1],32,x[2],32,32,32,32,32);
                }
                else if(t[2]==5)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[1],32,32,x[2],32,32,32,32);
                }
                else if(t[2]==6)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[1],32,32,32,x[2],32,32,32);
                }
                else if(t[2]==7)
                {
                    printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[2],x[1],32,32,32,32,32,32,32);
                }
                else if(t[2]==9)
                {
                    printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[1],x[2],32,32,32,32,32,32);
                }
            }
            else if(t[1]==9)
            {
                if(t[2]==1)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\n",32,32,x[1],32,32,32,x[2],32,32);
                }
                else if(t[2]==2)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\n",32,32,x[1],32,32,32,32,x[2],32);
                }
                else if(t[2]==3)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%dn\n",32,32,x[1],32,32,32,32,32,x[2]);
                }
                else if(t[2]==4)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%d\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,x[1],x[2],32,32,32,32,32);
                }
                else if(t[2]==5)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%d\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,x[1],32,x[2],32,32,32,32);
                }
                else if(t[2]==6)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,32,x[1],32,32,x[2],32,32,32);
                }
                else if(t[2]==7)
                {
                printf("\n\nCurrent Progress:\n\n\t%d\t%|\t%c\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",x[2],32,x[1],32,32,32,32,32,32);
                }
                else if(t[2]==8)
                {
                printf("\n\nCurrent Progress:\n\n\t%c\t%|\t%d\t%|\t%d\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\t_\t\t_\t\t_\n\n\t%c\t%|\t%c\t%|\t%c\n\n",32,x[2],x[1],32,32,32,32,32,32);
                }
            }
        }


        else if(count == 3)
        {

        }
    }
    return 0;
}
