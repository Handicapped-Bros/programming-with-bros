#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n ;
//cout << endl;
int a[n];
for(int i = 0; i <n; i++){
    cin >> a[i];
}
//cout << endl;
int x;
cin >> x;
int flag = 0,p = -2;
for(int i = 0; i <n; i++){
if(a[i] == x){
    flag = 1;
    if(p!=-2){
    continue;
    }
    p = i;
}
}
if(flag == 1){
  cout<< p;
}
else{ cout << -1;}




return 0;
}
