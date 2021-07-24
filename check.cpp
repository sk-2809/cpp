#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"put your number";
cin>>a;
if(a==2)cout<<"your number is prime";
else if(a==3)cout<<"your number is prime";
else if(a%6==1&&a%5!=0&&a%7!=0)
cout<<"your number is prime";
else if(a%6==5 &&a%5!=0&&a%7!=0)
cout<<"your number is  prime";
else
cout<<"your number is not prime";
}
