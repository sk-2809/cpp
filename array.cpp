#include<simplecpp>

main_program{
int arr[4];
for(int j=0;j<4;j++){
cin>>arr[j];
}
int no=1,i;
for(i=0;i<no;i++){
if(arr[i]!=0)
no++;
}
while(i!=0){
cout<<arr[i]<<endl;
i--;
}
}

