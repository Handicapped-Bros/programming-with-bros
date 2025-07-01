#include <bits/stdc++.h>
using namespace std;

int main(){

int N;
cin>> N;
int A[N];
int flag = 0;
int pos = 1 ;
for(int i = 0 ; i < N; i++){

    cin >> A[i];
}
int min = A[0];
for(int i = 0 ; i < N; i++){
if(A[i]<min){
    min = A[i];
    pos = 1 + i;
}

}
cout << min << " "<< pos ;

    return 0;
}
