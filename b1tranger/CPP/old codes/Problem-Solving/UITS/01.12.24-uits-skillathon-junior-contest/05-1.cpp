//1171123
//1,171,123

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N,n = 0,a,b,c,d;
    //string z = "000";
    cin >> N;
    //finding digits
int tmp = N;
while(tmp >0){

tmp = tmp/10;
n++;
//if(tmp==0){break;}
cout<<tmp <<endl;

}
tmp = N;
cout << n <<endl; // digits of N
int A[n];
int p = n-1;
int k = pow(10,p);
cout <<"k  " << k << endl;
for(int i = n-1; i >=0;i--){
tmp=tmp%k;

//A[i]

//cout << A[i];

}



    return 0;
}
