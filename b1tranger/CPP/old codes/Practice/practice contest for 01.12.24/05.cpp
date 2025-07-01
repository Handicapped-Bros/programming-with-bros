#include <bits/stdc++.h>
using namespace std;

int main(){

//int A,B,C,D;
//cin>> A >> B >> C >> D;

//cout << "Solve it or die"; // <<((A*B)-(C*D));
int N,  E = 0, O = 0, P = 0 , Ne = 0;;
cin >> N;
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
    E++;
    //pos = 1 + i;
    //cout << "EVEN\n";
}
else{
        O++;
    //min = A[i];
    //pos = 1 + i;
    //cout << "ODD\n";
}
if(A[i]>0){P++;}
else if(A[i]<0){Ne++;}

}
printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",E,O,P,Ne);

    return 0;
}
