#include<iostream>
using namespace std;
int main()
{
int k,l,m;
cin>>k>>l>>m;
if((k>=l)&&(k>=m))
cout<<k;
else  if((l>=k)&&(l>=m))
cout<<l;
else
cout<<m;
}

