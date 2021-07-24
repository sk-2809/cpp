#include<simplecpp>
long long int num(long long int n)
{
long long int i=0,m=n,term,sum=0;
while(m!=0)
{
m=m/10;
i++;
}
//return i;
while(n!=0){

term=(n%10)*pow(10,i-1);
sum=sum+term;
i--;
n=n/10;

}
return sum;
}


main_program
{
long long int n;
cin>>n;
cout<<num(n);
}

