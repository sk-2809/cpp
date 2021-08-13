#include<simplecpp>

//function to chek whether a number is prime or not.
int isPrime(int n){
if(n>=2){
int k=pow(n,0.5),j=0;
for(int i=2;i<=k;i++){
if(n%i==0){
j++;
}
}
if(j!=0){
return false;
}
else {
return true;
}
}
else{
return false;
}
}


main_program{
cout<<isPrime(47);
}
