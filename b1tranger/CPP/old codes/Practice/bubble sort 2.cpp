#include <iostream>
using namespace std;

int main()
{
    int n;
g:
    cout << "Enter length (n>=2):" << endl;
    cin >> n;
    if(n<2)
    {
        cout << "\n\nERROR!!\tenter again!\n\n";
        goto g;
    }
    int A[n];
    cout << "Enter array to sort (n times):" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // Bubble Sort
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                int tmp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = tmp;
            }
        }
    }

    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    return 0;
}
