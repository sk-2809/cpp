#include<simplecpp>

main_program
{
int n,sum=0,a,sum_sqr,sqr_sum=0,ans;
cin>>n;
repeat(n){
    cin>>a;
    sum=sum+a;
sqr_sum=sqr_sum+a*a;
}
sum_sqr=sum*sum;
ans=(sum_sqr-sqr_sum)/2;
cout<<ans;
}
