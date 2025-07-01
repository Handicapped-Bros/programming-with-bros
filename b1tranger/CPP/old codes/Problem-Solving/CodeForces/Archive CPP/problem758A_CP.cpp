#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n);
    set<int> unique_elements;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(n == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            if(unique_elements.find(a[i]) == unique_elements.end())
            {
                unique_elements.insert(a[i]);
                sum += a[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}
