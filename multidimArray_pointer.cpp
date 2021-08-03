#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[2][3] = {{1,2,5},{4,8,9}}, *p;
    for(p=&a[0][0];p<=&a[1][2];p++){
        cout<<*p<<" ";
    }
}
