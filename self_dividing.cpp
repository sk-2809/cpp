#include<simplecpp>
bool issdn(int n)
{
int i=1,m=n,j=1;
while(m!=0)
{
m=n%(;
if (n%m==0){
j++;
i++;}
else{
i++;}
}
if(j=i)
return 1;
else
return 0;
}

main_program
{

int l,u;
cin>>l>>u;
int i;
for(i=l;i<=u;i++)
{
if(issdn(i)==true)
cout<<i<<endl;

}}

