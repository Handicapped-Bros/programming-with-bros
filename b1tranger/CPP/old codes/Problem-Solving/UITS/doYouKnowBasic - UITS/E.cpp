#include <iostream>
using namespace std;

int main(){

int n1 =1, n2 = 0;
int cnt = 0,n;
cin >> n;
int a[n];
a[0]=0,a[1]=1;
for(int i = 0 ; i < n ; i ++ ){
	// 0 1 1 2 3 5 8 ....
    if(i<=1){
    cout<<i <<" ";
    }
    else{
    a[i]=a[i-2]+a[i-1];
cout << a[i]  << " ";}
//n2=n1+n2;
//n2=n2+n1;
cnt++;
}



return 0;
}
