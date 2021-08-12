#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair <int, int>> vect;

    int a[] = {1,2,3,4,5};
    int b[] = {2,5,7,8,4};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++){
        vect.push_back(make_pair(a[i],b[i]));

    }
    for(int i=0;i<n;i++){
        cout<< vect[i].first<<" "<<vect[i].second<<endl;
    }
    return 0;
}