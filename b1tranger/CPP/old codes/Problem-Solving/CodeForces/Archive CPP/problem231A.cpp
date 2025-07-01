// Team

#include <bits/stdc++.h>
using namespace std;

int main(){

int n;
cin >> n;
int x[n];
int countS = 0; //sure
//int temp;
int countP = 0; // problems
for(int i = 1; i <=n; i++){
for(int j = 1; j <= 3; j++)
{
cin >> x[j];
if(x[j]==1){
    countS++;
}
}
if(countS>=2)
{
    countP++;//cout << "P "<< countP << endl;
}countS = 0;//cout << "S " <<countS << endl;
}
cout << countP << endl;



    return 0;
}
