#include<simplecpp>
bool perfect(int n)
{
int k=0,i;
for(i=1;i<n;i++){
if(n%i==0)
    k=k+i;
}
if(k==n)
    return true;
    else
        return false;
}
main_program{
int a,b,i;
cin>>a>>b;
for(i=a;i<=b;i++){
    bool k=perfect(i);
    if(k==true)
        cout<<i<<" ";
}
}
