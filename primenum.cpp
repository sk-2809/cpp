#include<bits/stdc++.h>
#define x 10
using namespace std;
int main(){
int prime[x],isPrime=1;
prime[0]=2;
prime[1]=3;
for(int i=2; i<=x; i=i+2){
for(int j=0; j<i; j++){
if(prime[i]%prime[j]==0){
isPrime=0;
}
}

}
}
