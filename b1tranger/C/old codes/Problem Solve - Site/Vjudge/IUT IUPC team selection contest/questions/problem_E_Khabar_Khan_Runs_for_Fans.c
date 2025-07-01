#include<stdio.h>

int main()
{
    int T,N,K,i,j,a[100],sum=0;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%d%d",&N,&K);
        for(j=1; j<=N; j++)
        {
            scanf("%d",&a[j]);
        }
    }

    for(i=1; i<=N; i++)
    {
//printf("%d\n",a[i]);
        if(a[i]<=N && a[i]>=N)
        {
            sum = sum + a[i];
        }
        else
        {
            continue;
        }

    }
    printf("%d",sum);

    return 0;
}


/*
Famous film star Khabar Khan loves running. He often visits his favourite Ramna Park and runs for very long distances. He has a large number of fans who visits the park each day to see him running. Now, he wants to use this as an opportunity to impress the fans with his awesome speed.

The track on which he runs is an
N
N kilometres long straight path. There are
�
�
a
i
​
  fans standing within the
ith
ith kilometre of this path. A fan will be impressed only if Khabar Khan is running at his maximum speed when he passes by her. But he can run at his best speed only for a single continuous stretch of
K
K kilometres. Now Khabar Khan wants to know what is the maximum number of fans that he can impress.

Input
First line of the input contains the number of testcases
T
T (
1
≤
T
≤
10
1≤T≤10). For each test case, First line contains two space-separated integers
N
N and
K
K (
1
≤
K
≤
N
≤
100
1≤K≤N≤100 ), the length of the track and the maximum distance he can run at his best speed. Second line contains N space-separated integers
�
�
a
i
​
  (
1
≤
�
�
≤
100
1≤a
i
​
 ≤100 ), the number of fans within each kilometre of the track.

Output
For each test case print one line containing an integer, denoting the maximum number of fans Khabar Khan can impress.

Sample 1
Inputcopy	Outputcopy
1
7 2
2 4 8 1 2 1 8
12
He can impress 4+8=12 fans if he runs at his best speed between the 2nd and the 3rd kilometre, inclusive.
*/
