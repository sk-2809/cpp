#include<bits/stdc++.h>
using namespace std;

int func(long long int n){
int x = floor(log10(n)+1);
int m=0;
int a[x];
for(int i=0;i<x;i++){
a[i]=n%10;
n=n/10;
}
for(int i=0;i<x;i++){
for(int j=i+1;j<x;j++){
if(a[i]==a[j]){
m++;
}
}
}
if(m>0){
return 1;
}else{
return 0;
}
}

int main(){
cout<<func(1235151312155651235512154165132643515653121541213215);
}
