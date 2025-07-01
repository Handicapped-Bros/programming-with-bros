#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
g:
    cout << "Enter length (>=2):" << endl;
    cin >> n;
    if(n<2)
    {
        cout << "\n\nERROR!!\tenter again!\n\n";
        goto g;
    }
    int A[n];
    cout << "Enter array to sort (n times):" << endl;
    for(int i = 0; i<n; i++)
    {
        cin >> A[i];
    }
    int sort = 0;
    int tmp;
    for(int j = 0; j<=n-1; j++)
    {
        for(int i = 0; i<=n-i-1; i++)
        {
            if(A[i]>A[i+1])
            {
                tmp = A[i];
                A[i] = A[i+1];
                A[i+1] = tmp;
            }
        }
    }
    cout << "\n\n";
    for(int i = 0; i<n; i++)
    {
        cout << A[i] <<endl;
    }

    return 0;
}
