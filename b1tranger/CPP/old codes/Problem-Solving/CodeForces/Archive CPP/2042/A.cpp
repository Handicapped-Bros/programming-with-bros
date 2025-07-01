//A. Greedy Monocarp

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k, x = 0,cnt = 0,max = 0, sum = 0,flag = 0;
    cin >> t;
    for(int i = 0; i<t; i++)
    {
        cin >> n >> k;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];
           //cout << a[j] << endl;
        }
        max = a[0]; //cout << "max " <<max << endl;
        while(sum<=k)
        {
            for(int j = 0; j < n; j++)
            {
                if(a[j]>max)
                {
                    max = a[j];

                }
                x = j;
            }
            cout << "max " <<a[x] << endl;
            sum = sum + max;
            //cout << "ousted array " <<a[x] << endl;
            a[x]=0;
            cnt++;
            //cout << "count " << cnt << endl;
        }
        cout << cnt << endl;
        cnt = 0;
        sum = 0;
        flag = 0;
    }
    return 0;
}
