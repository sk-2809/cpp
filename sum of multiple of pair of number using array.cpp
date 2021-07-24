#include<simplecpp>
main_program{
int n,sum=0,term;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
for(int j=0;j<n;j++)
{
for(int k=j+1;k<n;k++)
{
term=a[j]*a[k];
sum=sum+term;
}
}
cout<<sum;
}
