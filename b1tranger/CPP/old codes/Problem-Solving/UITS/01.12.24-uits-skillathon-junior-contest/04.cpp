//strictly increasing??
//3
// 1 2 3
// YES
// 3
// 1 2 2
// NO

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N ;
    int arr[N];
    int arr2[N];
    int mini = 0;
    for(int i = 0; i <N; i++)
    {
        cin >> arr[i];
    }
    mini = arr[0];
    for(int i = 0; i <N; i++)
    {
        for(int j = 0; j <i; i++)
        {

            if(arr[i]<mini)
            {
                mini = arr[i];
            }
            arr2[i]=mini;
        }
    }
    for(int i = 0; i <N; i++)
    {
        cout << arr2[i];
    }
    return 0;
}
