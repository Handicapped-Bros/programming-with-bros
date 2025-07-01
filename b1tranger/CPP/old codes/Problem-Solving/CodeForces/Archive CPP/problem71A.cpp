//Way Too Long Words

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
cin >> n;
string str1;
string str2;

for(int i = 1; i<=n;i++){
    cin >> str1;
if(str1.length()>10){
    str2 = str1[0] + to_string(str1.length() - 2) + str1.back();
    cout << str2 << endl;
}
else{
    cout << str1 << endl;
}
}



    return 0;
}
