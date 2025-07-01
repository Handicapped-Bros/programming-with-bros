#include <iostream>
using namespace std;

int main() {
        int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
    }
    int min, pos;
    min =a[0];
    for(int i=0; i<n;i++){
        if(a[i]<min){
            min = a[i];
            pos = i;//using i+1 here shows error on mobile
        }
    }
    cout << min << " " << pos+1;
    return 0;
}