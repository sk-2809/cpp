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

//function for finding palindrome of number
int palindrome(long long int m){
long long int k=m,l=m,i=0,num=0;
while(l!=0){
i++;
l=l/10;
}
while(i!=0){
num+=(k%10)*power(10,i-1);
i--;
k=k/10;
}
return num;
}


int main(){
cout<<palindrome(123);
}
