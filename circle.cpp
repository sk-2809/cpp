#include<simplecpp>


main_program
{
int n,a,mina,k,i=1;
cin>>n;
cin>>a;
if(a!=0){
mina=a;
while(i<n)
{
cin>>a;
mina=min(mina,a-mina);
i++;
}
k=360/mina;
cout<<k-n<<endl;
}
else if(a==0){
mina=a;
while(i<n)
{
cin>>a;
mina=max(mina,a-mina);
i++;
}
k=360/mina;
cout<<k-n<<endl;
}
}

