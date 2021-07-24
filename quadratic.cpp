#include<iostream>
using namespace std;



    int F(int x){
    return x*x+3*x+7;
    }
 int T(int x,int y,int z){
 return F(x)*F(x)+3*F(y)+7*F(z);
 }
 int G(int x,int y,int z){
 return T(x,y,z)+T(x-1,y,z)+T(x+1,y,z);
 }

int main(){
int x,y,z;
cin>>x>>y>>z;
cout<<G(x,y,z);

}
