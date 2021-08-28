#include<bits/stdc++.h>
using namespace std;

struct complexNumber
{
    int real;
    int img;
    complexNumber(int r, int i){
        cout<<r<<" + "<<i<<"i";
    }
};

void addCN(complexNumber c1, complexNumber c2){
    complexNumber(c1.real+c2.real,c1.img+c2.img);
}

int main(){
    complexNumber c1(1,2) ;
    cout<<endl;
    complexNumber c3(4,3) ;
    cout<<endl<<c1.img<<" "<<c3.real<<endl;
    addCN(c1,c3);
}