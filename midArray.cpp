#include<bits/stdc++.h>
using namespace std;

int *findMid(int a[],int n){
    return &a[n/2];
}

int main(){
    int a[] = {12,15,78,95,65,23,1,6,5,84,89,152};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = findMid(a,n);
    cout<<*mid;

}
