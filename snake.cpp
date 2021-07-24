#include<simplecpp>
main_program
{
int n,m;
cin>>n>>m;
if(n!=0&&m!=0)
for(int a=1;a<=n;a++){
if(a%2!=0){
for(int i=1;i<=m;i++)
{
cout<<"1";
}
cout<<endl;
}
else if(a%2==0){
if(a%4!=0){
for(int j=1;j<m;j++)
{
cout<<"0";
}
cout<<"1"<<endl;
}

else if(a%4==0)
{
cout<<"1";
for(int j=1;j<m;j++)
{
cout<<"0";
}
cout<<endl;
}
}
}
}
