#include <iostream>
using namespace std;
int main() {
    int numbers[5];
    cout << "Enter five integer numbers:\n";
    for (int i = 0; i < 5; ++i) {
    cin >> numbers[i];
    }
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] % 2 == 0) {
            numbers[i] = 0;
        } else {
            numbers[i] = 1;
        }
    }
    cout << "Modified Array:\n";
    for (int i = 0; i < 5; ++i) {
    cout << numbers[i] << " ";

    }

    return 0;
}

