#include<bits/stdc++.h>
using namespace std;

long long int rvrs(long long int n){
int temp = 0;
while(n>0){
temp = temp*10 +  n%10;
n=n/10;
}
return temp;
}


int main(){

cout<<rvrs(22345452);
}
