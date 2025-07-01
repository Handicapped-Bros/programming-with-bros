#include <bits/stdc++.h>
using namespace std;

int main(){
int T;
cin >> T;
int N[1000], j = 0;
for(int i = 0; i <1000 ; i++ )
{
 if(j == T){
    j = 0;
 }
    printf("N[%d] = %d\n",i,j);
 j++;
}


    return 0;
}
