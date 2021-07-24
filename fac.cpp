#include<simplecpp>

main_program{
int i=1,n=1;
cout<<"Put your Number";
cin>>n;
repeat(n-1){n=n*i;
i=i+1;
}
cout<<"your factorial=";
cout<<n;
}
