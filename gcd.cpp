#include<simplecpp>

int gcd(int m, int n){
if(m==0||n==0){
return 0;
}else{
while(m%n!=0){
int temp = m%n;
m=n;
n=temp;
}
return n;
}
}

main_program{
//Write your code here
int n, m;
cout<<"Enter two number, make sure sure you enter first number as largest"<<endl;
cin>>n>>m;
cout<<gcd(n,m);

}
