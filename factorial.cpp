#include<simplecpp>

main_program{
int n;
cin>>n;
int i=1,fac=1;
repeat(n){
fac=fac*i;
i=i+1;
}
cout<<fac;
}
