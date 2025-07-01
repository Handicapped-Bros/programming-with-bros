#include <bits/stdc++.h>
using namespace std;
bool comp(int a, int b) {
  	return a > b;
}
int main()
{
int n,k;
while(n<k){
    cin>>n>>k;
    if(n<k){cout<<"ERROR\nInput again!\n\n";}
}
int p[n];
for(int i=0;i<n;i++){
cin>>p[i];
}
sort(p,p+n,comp);
int count=0;
for(int i=0;i<n;i++){
if(i>0){
    if(p[i-1]==p[i]){
        continue;
    }
}
count++;
}
cout<<count;

    return 0;
}





















