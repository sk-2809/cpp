#include<simplecpp>

main_program{
float sum=0,cre=0;
int n;
float cpi;
cout<<"give vale of n";
cin>>n;
for(int i=0;i<n;i++){
float a[n],b[n];
cout<<"course credit:";
cin>>a[i];
cout<<"course grade:";
cin>>b[i];
sum+=a[i]*b[i];
cre+=b[i];
}
cpi=sum/cre;
cout<<cpi;

}
