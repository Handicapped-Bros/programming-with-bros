#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // num of test cases
    int a,b,c;
    int flag = 0;
    for(int i = 0; i<t; i++)
    {
        cin >> a >> b >> c;
        if(c == a + b )
        {
            flag = 1;
        }
        else if(a == b + c)
        {
            flag = 1;
        }
        else if( b == a +c)
        {
            flag = 1;
        }
        if(flag ==1 )
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        flag = 0;

    }

    return 0;
}
