#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,flag = 0; //string input?
    cin >> n;
    long long int a[n];
    for(long long int i = 0; i <n; i++)
    {
        cin >> a[i];
    }
    if(n%2==0)
    {
        for(int i = 0; i<n/2; i++)
        {
            if(a[i]==a[n-1-i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if(flag==1)
        {
            cout <<"YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else if(n%2!=0)
    {
        for(int i = 0; i<(n/2)-1; i++)
        {
            if(a[i]==a[n-1-i])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if(flag==1)
        {
            cout <<"YES";
        }
        else
        {
            cout << "NO";
        }

    }

    return 0;
}
