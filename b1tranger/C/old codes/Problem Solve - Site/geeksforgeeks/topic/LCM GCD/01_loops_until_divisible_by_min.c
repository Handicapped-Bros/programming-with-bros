#include <stdio.h>
int main()
{
    int num1, num2, minmultiple;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
// minmultiple will be equal to the smaller number
    minmultiple = (num1 < num2) ? num1 : num2;
    while (1)
    {
        if (minmultiple % num1 == 0 && minmultiple % num2 == 0)
        {
            printf("LCM = %d\n", minmultiple);
            break;
        }
        minmultiple++;
    }

    return 0;
}
