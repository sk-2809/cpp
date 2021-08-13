#include<iostream>
using namespace std;
//function for finding power of number.
int power(int n,int m){
if(m==0){
return 1;
}

else {
return power(n,m-1)*n;
}
}

int main(){
cout<<power(3,5);
}
