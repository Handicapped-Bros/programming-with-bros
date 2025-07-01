#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++)
    {
        cin>> A[i];
    }
    int X,flag=-1;
    cin >> X;
    for(int i = 0; i < N; i++)
    {
        if(X==A[i])
        {
            cout<<i;
            flag=1;
            break;
        }
    }
    if(flag==-1)
    {
        cout<<flag;
    }
    return 0;
}
