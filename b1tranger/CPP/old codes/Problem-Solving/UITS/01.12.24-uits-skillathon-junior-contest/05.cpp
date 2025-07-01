//1171123
//1,171,123
//10000000000000
//10000000,0,0,0
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N,a,b,c,d;

    cin >> N;
    a =N%1000;
    b = N%1000000;
    b = b/1000;
    c = N%1000000000;
    c = c/1000000;
    d = N/1000000;

    if(N>=1000000000)
    {
if(N==1000000000){cout << "1,000,000,000";}
else{
cout << d << "," <<c <<"," << b << "," << a;}
    }
    else if(N>=1000000)
    {
        if(N==1000000){cout << "1,000,000";}
else{
        cout << c <<"," << b << "," << a;}
    }
    else if(N>=1000)
    { if(N==1000){cout << "1,000";}
else{
        cout << b << "," << a;}
        //cout<< a;

    }
    else { cout << N;}

    return 0;
}
