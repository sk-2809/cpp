#include<iostream>
using namespace std;
int main()
{
int a,b,c;
float d,e,f,k;
cout<<"a,b,c";
cin>>a>>b>>c;
d=b*b-4*a*c;
k=pow(d,0.5);
e=-b/2*a+k/2*a;
f=-b/2*a-k/2*a;
cout<<e<<","<<f;
}
