#include <bits/stdc++.h>
using namespace std;

int main()
{
long long int n,a;
cin >> n;
if(n>1000000){
    cout << n/1000000 << ",";
a = n-n/1000;
cout << a;
   // cout <<a/1000;
}

    return 0;
}
