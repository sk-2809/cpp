#include<simplecpp>

main_program{
int n;
cin>>n;
int i=1;
double ans=1,term=1;

repeat(n)
{
term=term*i;
ans=ans+1/term;
i++;
}
cout<<ans;
}
