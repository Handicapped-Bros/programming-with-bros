#include<stdio.h>

int main()
{
    long long N,X,count = 0;
    scanf("%d",&N);

    for(int i=1; i<=N; i++)
    {
        scanf("%lld",&X);
        count = 0;

        if(X==1)
        {
            printf("-1\n");
        }
        else if(X%10==0)
        {
            printf("%lld\n",count);
        }
        else if(X%10!=0)
        {
            while(X%10!=0)
            {
                X=X*2;
                count++;
            }
            printf("%lld\n",count);

        }

    }

    return 0;
}

/*

During Eid, Mr. Faias had nothing much to do and decided to play a number game to pass the time. He starts the game by selecting a number
�
X. In one turn, he can multiply
�
X by
2
2. The goal of the game is to make
�
X divisible by
10
10.

Help him find the smallest number of turns necessary to win the game (it may be possible to win in zero turns) or determine that it is impossible.

Input
The first line of the input contains a single integer
�
T (
1
≤
�
≤
1000
1≤T≤1000) denoting the number of test cases. The description of
�
T test cases follows. Each test case contains a single integer denoting the initial value of
�
X (
0
≤
�
≤
1
0
9
0≤X≤10
9
 ).

Output
For each test case, print a single line containing one integer — the minimum required number of turns or
−
1
−1 if there is no way to win the game.

Sample 1
Inputcopy	Outputcopy
3
10
25
1
0
1
-1

*/

