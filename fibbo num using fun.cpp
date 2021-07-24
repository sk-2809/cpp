#include<simplecpp>
int f(int n)
{
if (n>=2)
return f(n-1)+f(n-2);
else
return 1;
}
main_program{
int k;
cin>>k;
cout<<f(k);

}
