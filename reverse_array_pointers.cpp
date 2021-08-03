#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[11] = {10,15,42,78,95,64,23,15,12,64,480};
    int n = sizeof(a)/sizeof(a[0]);
    for(int *m=a+n-1;m>=a;m--){
        cout<<*m<<" ";
    }
}
