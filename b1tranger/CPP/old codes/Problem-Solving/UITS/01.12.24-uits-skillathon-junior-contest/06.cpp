//distributing chocolates

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,A,B,C,D,E,sum = 0;
    int A[5];
    int flag = 0;
    cin >> T ;
    for(int i = 0 ; i < T ; i++)
    {
        //cin >> A >> B >> C >> D >> E;

        for(int j = 0; j<5;j++){
cin >> A[j];
sum = sum + A[j];

if(sum%2==0)
        {
            if((sum/2)%2==0){
            cout <<"YES\n";}
            else {cout <<"NO\n";}
        }
        else
        {
            cout << "NO\n";
        }
        }



        sum = 0;
        flag = 0;
    }

    return 0;
}
