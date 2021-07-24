#include<simplecpp>
main_program
{
float income,tax;
cin>>income;
if(income<=180000)
tax=0;
else if(income>180000 && income<=500000)
tax=(income-180000)*0.1;
else if(income>500000 && income<=800000)
tax=(income-500000)*0.2;
else if(income>800000)
tax=(income-800000)*0.3;
cout<<tax;
}
