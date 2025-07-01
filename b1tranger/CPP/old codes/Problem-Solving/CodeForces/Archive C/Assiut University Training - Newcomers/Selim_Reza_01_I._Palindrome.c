//finding average of 50 student's numbers

#include <stdio.h>

int main()
{
    int num,n, rev = 0, remainder;
    scanf("%d",&num);
    n=num;
    while(n!=0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }


    if(num==rev)
    {
        printf("%d\nYES\n",rev);
    }
    else
    {
        printf("%d\nNO\n",rev);
    }


    return 0;
}
