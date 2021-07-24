#include<simplecpp>


main_program
{
int n,i=0,t=0;
cin>>n;
int m=n/2;
int j=n%2;
while(m!=0){
int k=m%2;
if(k!=j){
i++;
if(i>=t)
t=i;
j=m%2;
m=m/2;}
else{
j=m%2;
m=m/2;
i=0;
}
}
cout<<i<<" "<<t+1;

}

