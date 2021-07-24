#include<simplecpp>

main_program{
int n;
cin>>n;
float maxima,num;
cin>>num;
maxima=num;
repeat(n-1)
{
cin>>num;
maxima=max(maxima,num);
}
cout<<maxima;
}
