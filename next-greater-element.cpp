// next greater element
// Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in the array. Elements for which no greater element exist, consider the next greater element as -1.

#include<bits/stdc++.h>
using namespace std;

void printNGE(int a[], int n){
    stack<int> s;
    vector<int> v;
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
        s.push(a[i]);
        continue;
        }
        while(s.empty()==false && s.top()>a[i]){
            v.push_back(a[i]);
            s.pop();
        }
        while(s.empty()==false){
            v.push_back(-1);

        }
    }

    for (auto ir = v.rbegin(); ir != v.rend(); ++ir){
    cout << *ir << " ";
    }

}

int main(){

 int a[] = {4,5,2,25};
 int n = sizeof(a)/sizeof(a[1]);
 printNGE(a,n);
}
