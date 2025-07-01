#include <bits/stdc++.h>
using namespace std;

int main(){
int N,A,B,C,tmp;
cin >> N >> A >> B >> C;
tmp = A+B+C;
if(tmp<N){
    cout << N - tmp;
}
else{
    cout << 0;
}


return 0;
}
