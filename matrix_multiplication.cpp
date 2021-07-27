#include<bits/stdc++.h>
using namespace std;

int main(){
int rows[2], colm[2];
cout<<"Enter number of rows and column of the first matrix: "<<endl;
cin>>rows[0]>>colm[0];
cout<<"Enter number of rows and column of the second matrix: "<<endl;
cin>>rows[1]>>colm[1];
if(rows[1]==colm[0]){
    int v[rows[0]][colm[0]], u[rows[1]][colm[1]];
    int s[rows[0]][colm[1]];
    memset( s, 0, rows[0]*colm[1]*sizeof(int) );
    cout<<"Enter your first matrix: "<<endl;
    for(int i=0;i<rows[0];i++){
    for(int j=0;j<colm[0];j++){
    cin>>v[i][j];
    }
    }
    cout<<"Enter second matrix: "<<endl;
    for(int i=0;i<rows[1];i++){
    for(int j=0;j<colm[1];j++){
    cin>>u[i][j];
    }
    }
    for(int i=0;i<rows[0];i++){
    for(int j=0;j<colm[1];j++){
    for(int k=0;k<rows[0];k++){
    s[i][j]=s[i][j] + v[i][k]*u[k][j];
    }
    }
    }
for(int i=0;i<rows[0];i++){
    for(int j=0;j<colm[1];j++){
    cout<<s[i][j]<<" ";
    }
    cout<<endl;
    }


}else{
cout<<"we cannot proceed, invalid size of the two matrix";
}

}
