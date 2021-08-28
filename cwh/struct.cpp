#include<bits/stdc++.h>
using namespace std;

struct emaployee
{
    string name;
    string id;

    emaployee(int n){    //contrructor
        cout<<n;
    }
    emaployee(string s,string id){   //constructor
        name = s;
        id = id;
    }

    void printdetails(){
        cout<<"My name is "<<name<< " and my emplyee ID is "<<id;
    }
};


int main(){
    emaployee e1(5);
    emaployee("0x124","Sachin K");
    cout<<endl;
    e1.printdetails();

}