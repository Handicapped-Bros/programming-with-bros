#include <iostream>
using namespace std;

int main(void) {
    int t, n, a, b, x;
    cin >> t;
    while (t > 0) {
        cin >> n >> a >> b;
        if (a * 2 > b) {
            if (n % 2 == 0) {
                x = (n / 2) * b;
            } else {
                x = ((n / 2) * b) + a;
            }
        } else {
            x = n * a;
        }
        cout << x << endl; 
        t--;
    }
    return 0;
}