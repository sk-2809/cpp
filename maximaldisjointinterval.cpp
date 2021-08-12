#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int>&b){
    return (a.second<b.second);
}

void maximalDisjointInterval(vector<pair<int, int>> list){
    sort(list.begin(), list.end(), sortbysec);
    int r1 = list[0].second;

    cout<<"[ "<<list[0].first<<" "<<list[0].second<<" ]"<<endl;
    for(int i=1;i<list.size();i++){
        int l1 = list[i].first;
        int r2 = list[i].second;

        if(l1>r1){
            cout << "[ "<<l1<<" "<<r2<<" ]"<<endl;        }
    }
}


int main() {
    vector<pair<int, int>> list = {{1,4},{2,3},{4,6},{8,9}};

    maximalDisjointInterval(list);

    return 0;

}