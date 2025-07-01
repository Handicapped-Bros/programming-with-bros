#include <iostream>
using namespace std;

int main()
{
    int n,sum = 0;
    int flag;
    cin >> n;
    int a[n];
    cout << endl;
    for(int i = 0; i <n; i++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        cout << 0;
    }
    else
    {
        for(int i = 0; i <n; i++)
        {
            flag =0;
            /*if(i==0)
            {
                sum = sum + a[i];
            }
            else
            {*/
            for(int j = 0; j <=i; j++)
            {
                if(a[i]==a[j])
                {
                    //a[i]=0;
                    flag =1;
                    continue;
                }
            }

            if(flag == 1)
            {
                continue;
            }
            sum = sum + a[i];
            //}
        }
        cout << endl << sum << endl;
    }

    return 0;
}
