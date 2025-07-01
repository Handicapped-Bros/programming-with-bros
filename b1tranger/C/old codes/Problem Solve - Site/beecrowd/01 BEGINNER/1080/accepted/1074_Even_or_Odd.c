#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i;
    int a[10000];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
        //} for(int i=0; i<=N; i++) {
        if (a[i]==0)
        {
            printf("NULL\n");
        }
        else if (a[i] % 2 == 0)
        {

            if (a[i] > 0)
            {
                printf("EVEN POSITIVE\n");
            }
            else
            {
                printf("EVEN NEGATIVE\n");
            }

        }
        else //if (a[i] % 2 != 0)
        {
            if (a[i] > 0)
            {
                printf("ODD POSITIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }

        // else {printf("Invalid Input");}
    }

    return 0;
}

/*



Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.

Input
The first line of input is an integer N (N < 10000), that indicates the total number of test cases. Each case is a integer number X (-107 < X <107)..

Output
For each test case, print a corresponding message, according to the below example. All messages must be printed in uppercase letters and always will have one space between two words in the same line.



*/