#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
int a[n];

for(int i=0;i<n;i++){
    cin >> a[i];
}
int tmp = a[0];
for(int j=0;j<n;j++){
for(int i=0;i<n;i++){
if(a[i]>a[i+1]){
    tmp=a[i];
    a[i]=a[i+1];
    a[i+1]=tmp;
}
}}
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
}
