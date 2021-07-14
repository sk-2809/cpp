#include<simplecpp>

main_program{
//Write your code here
int t;
int num[][4]={{},{},{},{}};
int d[][2]={{},{}};
float a[]={};
int x[]={};
cin>>t;
for(int i=0;i<t;i++){
cin>>num[i][0]>>num[i][1]>>num[i][2]>>num[i][3];
d[i][0]=abs(num[i][0]-num[i][2]);
d[i][1]=abs(num[i][1]-num[i][3]);
if(d[i][0]>d[i][1]){
x[i]=d[i][1];
}else{
x[i]=d[i][0];
}
a[i]=(3.14*x[i]*x[i])/4;
};
for(int j=0;j<t;j++){
cout<<a[j]<<" ";
}
}
