#include<bits/stdc++.h>
using namespace std;

int main(){
int p=1 ;
int n;
cin>> n;

while(n>0){

int temp = n%10;

p = p*temp;

n=n/10;
}
cout<<p;
}
