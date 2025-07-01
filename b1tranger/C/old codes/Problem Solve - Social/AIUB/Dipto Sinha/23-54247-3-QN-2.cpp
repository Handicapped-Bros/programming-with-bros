#include <iostream>
using namespace std;
int main() {
     int size = 4;


    int intArray[size];
    float floatArray[size];

     cout << "Enter 4 integer numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Integer element " << i + 1 << ": ";
        cin >> intArray[i];
    }


   cout << "Enter 4 floating point numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Float element " << i + 1 << ": ";
       cin >> floatArray[i];
    }

        cout << "\nSummation Result:" <<endl;
    for (int i = 0; i < size; ++i) {
        float result = floatArray[i] + intArray[i];
        cout << "Result at index " << i+1 << ": " << result <<endl;
    }

    cout << "\nMultiplication Result:" <<endl;
    for (int i = 0; i < size; ++i) {
        float result = floatArray[i] * intArray[i];
        cout << "Result at index " << i+1 << ": " << result <<endl;
    }
    return 0;
}
