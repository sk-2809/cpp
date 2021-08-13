#include<simplecpp>
using namespace std;

//function for finding factorial of number
int fact(int n){
if(n==0){
return 1;
}
else{
return fact(n-1)*n;
}
}

int main(){
cout<<fact(5);
}
