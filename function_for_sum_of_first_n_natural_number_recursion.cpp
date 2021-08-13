#include<iostream>
using namespace std;
//function to find sum of first n natural number

int sum_natural_no(int n){
if(n==0){
return 0;
}
else return sum_natural_no(n-1)+n;
}

int main(){
cout<<sum_natural_no(10);
}
