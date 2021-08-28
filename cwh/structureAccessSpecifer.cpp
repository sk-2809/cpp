#include<bits/stdc++.h>
using namespace std;

struct structTest
{
    public: // here m and n can be access outside the struct, as it is defined public
    int m;
    int n;


    void printdetails1(){ //this function can be used outside the struct as it is declared public
        cout<<s;   // here we cann use this s as it is inside the struct even it is defined for the fucntion inside the structure
    }

    private: // here s cannot be access outside the struct, as it is defined private
    int s=0;   

    void printdetails2(){   // this function cannot be used outside the struct as it is declared private  
        cout<<s;        // here we cann use this s as it is inside the struct even it is defined for the fucntion inside the structure
    }
};





int main(){
    structTest m;
    m.m = 1;
    m.n = 2;
    //m.s = 3;

    cout<<m.m<<endl<<m.n<<endl;

    m.printdetails1();  //here we will get the value of s even it is private in the struct but this function called is a public function
   // m.printdetails2(); //this will give compilation error as this function cannot be called here as it defined private

}