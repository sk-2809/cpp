#include<simplecpp>
int gcd(int m,int n){


while(m%n!=0)
{
int r=m%n;
m=n;
n=r;
}
return n;
}
main_program
{
int a,b;
cin>>a>>b;
cout<<gcd(a,b);
}
