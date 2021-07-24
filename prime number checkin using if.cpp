#include<simplecpp>
main_program
{
int n,i=2;
cin>>n;
repeat(n/2)
{
if(n%i==0)
cout<<"not prime";
else
cout<<"prime";
i++;
}
}
