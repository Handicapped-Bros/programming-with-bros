//Bit++

#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
int X = 0;
cin >> n;
string var;
for(int i = 1; i<=n; i++  ){
cin >> var;
if(var=="++X"){
    ++X;
}
else if(var=="X++"){
    X++;
}
else if(var=="--X"){
    --X;
}
else if(var=="X--"){
    X--;
}
}
cout << X<< endl;

    return 0;
}
