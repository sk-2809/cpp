#include<simplecpp>

main_program{
int n,i=2;
cin>>n;
if(n==2||n==3)
cout<<"prime";
else

while(i=int(sqrt(n)))
{
if(n%i!=0)
i++;
else
cout<<"not prime";
break;
}
}

