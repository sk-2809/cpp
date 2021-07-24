#include<simplecpp>
long long int fac(int n)
{
if (n==0)
return 1;
else
return n*fac(n-1);
}
long long int bt(int n ,int r)
{
return fac(n)/fac(r)/fac(n-r);

}

main_program{
int n,r;
cout<<"put(n,r)";
cin>>n>>r;
cout<<bt(n,r);
}
