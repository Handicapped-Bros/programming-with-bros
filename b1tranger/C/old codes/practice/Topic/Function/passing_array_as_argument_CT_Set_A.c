#include<stdio.h>

int max(int num[], int size)
{
int max1 = num[0];
for(int i = 0;i<3;i++)
{
    if(num[i]>max1)
    {
        max1 = num[i];
    }
}
return max1;
}

int main()
{
printf("# Set A:\n");
int num[3];
int size = sizeof(num) / sizeof(num[0]);
for(int i = 0;i<3;i++)
{
    scanf("%d",&num[i]);
}
printf("\nmaximum value is %d",max(num,size));


    return 0;
}

