#include<simplecpp>

main_program{
int n;
float x,sum,avg;
cin>>n;
repeat(n)
{
cin>>x;
sum=sum+x;
}
avg=sum/n;
cout<<avg;
}
