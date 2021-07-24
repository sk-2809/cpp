#include<simplecpp>

main_program
{
int n;
cout<<"Number of Data";
cin>>n;
float a ,x;
cout<<"type your number";
cin>>a;

repeat(n-1)
{cout<<"type your number";
 cin>>x;
a=max(a,x);
}
cout<<"maximum of your data"<<a;
}
