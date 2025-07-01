#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    long long sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    if(sum<0)
    {
        sum=sum*(-1);
    }
    cout<<sum;


    return 0;
}
