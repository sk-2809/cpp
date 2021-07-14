
#include<bits/stdc++.h>
using namespace std;

int main(){
int sum = 0;
int n;
cin>>n;
for(int i=1;i<n;i++){
if(n%i==0){
sum = sum + i;
}
}
if(n==sum){
cout<<"1";
}else{

cout<<"0";
}
}
