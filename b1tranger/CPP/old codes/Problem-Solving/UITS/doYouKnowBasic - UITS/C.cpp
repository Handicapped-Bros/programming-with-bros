#include <bits/stdc++.h>
using namespace std;

int main(){
long long int n,sum = 0;
cin >> n;
long long int a[n];
for(long long int i = 0; i <n; i++){
    cin >> a[i];
    //if(a[i]<0){
    //a[i] = a[i]*(-1);
    //}
    sum = sum + a[i];
}
if(sum<0){
    sum = sum*(-1);
}
//int x;
//cin >> x;
//int flag = 0,p = -2;
cout << sum;



return 0;
}
