#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            sum = sum+a[i];
//            cout<<endl<<sum<<endl;
        }
    }
cout << sum;


    return 0;
}
