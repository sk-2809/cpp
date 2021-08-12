#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr ={{1,2},{2,3}};
    vector<int> *p;
    int sum=0;
    for(p=&arr[0][0];p<=&arr[1][1];p++){   //wrong
    sum = sum + *p;
    }
cout<< sum;
}
