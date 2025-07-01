#include <iostream>
//#include <iomanip>
#include <stdio.h>
//#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x;
    cin >> x;
    double N[100];
    for(int i = 0; i < 100; i++)
    {
        N[i]=x;
        printf("N[%d] = %.4lf\n",i,N[i]);
        //cout << "N[" << i << "] = " << fixed << setprecision(4) << N[i] << endl;
        x = x/2.0;
    }


    return 0;
}
