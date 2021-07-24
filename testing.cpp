#include<simplecpp>
int permutation(int n)
{
int i=1,m=n;
while(m/10!=0)
{
m=m/10;
i++;
}
//return i;
for(int k=1;k<=i;k++)
{


}
}
main_program{
int n,i=0;
cin>>n;
int k=permutation(n);
cout<<k-1<<endl;
repeat(k-1)
{
int c = n/ceil(pow(10,i));
cout<<c%10;
i++;
}
}
