#include<bits/stdc++.h>
using namespace std;
#define N 5
int main(){

int n[N] = {0,1,7,5,4};
int a[N];

for(int i=0;i<N;i++){
a[i]=n[N-i-1];
}
for(int i=0;i<N;i++){

cout<<a[i]<<"    ";
}

}
