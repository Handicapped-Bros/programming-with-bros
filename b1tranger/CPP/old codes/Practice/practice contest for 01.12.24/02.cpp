#include <bits/stdc++.h>
using namespace std;

int main(){

int N;
cin>> N;
int A[N];
//int flag = 0;
//int pos = 1 ;
for(int i = 0 ; i < N; i++){

    cin >> A[i];
}
//int min = A[0];
for(int i = 0 ; i < N; i++){
if(A[i]%2==0){
    //min = A[i];
    //pos = 1 + i;
    cout << "EVEN\n";
}
else{
    //min = A[i];
    //pos = 1 + i;
    cout << "ODD\n";
}

}
//cout << min << " "<< pos ;

    return 0;
}
