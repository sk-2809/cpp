#include<simplecpp>

main_program
{
int x;
float avg,sum,data;
cout<<"Number of data:";
cin>>x;
repeat(x){cout<<"Data";
cin>>data;
sum=sum+data;
}
avg=sum/x;
cout<<"Average of your Data";
cout<<avg;
}
