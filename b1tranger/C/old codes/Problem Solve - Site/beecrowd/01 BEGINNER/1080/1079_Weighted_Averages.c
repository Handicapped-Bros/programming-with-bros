#include <stdio.h>

int main()
{
    int N;
    float a1,a2,a3, w1 = 2,w2 = 3,w3 = 5;
    scanf("%d",&N);
    for(int i = 1; i<=N; i++)
    {
        scanf("%f%f%f",&a1,&a2,&a3);
        printf("%.1f\n",(a1*w1+a2*w2+a3*w3)/(w1+w2+w3));
    }
    return 0;
}
