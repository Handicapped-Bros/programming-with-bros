#include <iostream>
using namespace std;

int main(){
int t;
cin >> t;
string S;
int tmp;
for(int i = 0; i<t;i++){
    cin >> S;
    tmp = S.length();
if(S.length()>10){
    printf("%c%d%c\n",S[0],tmp-2,S[tmp-1]);
}
else{
    cout << S << "\n";
}
}

return 0;
}
