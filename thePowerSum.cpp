#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
    if(n==0){
        return 1;
    }else if(n%2==0){
        return power(x,n/2)*power(x,n/2);
    }else{
        return x*power(x,n/2)*power(x,n/2);
    }
}

int func(int x, int n, int cur_num=1,int cur_sum=0){
    int result=0;

    int p = power(cur_num,n);

    while(p+cur_sum<x){
        result = result + func(x,n,cur_num+1,p+cur_sum);
        cur_num++;
        p = power(cur_num,n);
    }
    if(p+cur_sum==x){
        result++;
    }

    return result;
}

int main(){
    int x, n;
    cin>>x>>n;
    cout<<func(x,n);
    return 0;
}