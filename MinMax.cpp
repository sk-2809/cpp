// prograsm to find the largest and smallest elemnt in an array, pointers has been used

#include<bits/stdc++.h>
using namespace std;

void mInmAx(long long int a[], int n, long long int *mIn, long long int *mAx ){
 *mIn = *mAx = a[0];
 for(int i=0;i<n;i++){

 if(a[i]>*mAx){
  *mAx = a[i];
 }
 if(a[i]<*mIn){
 *mIn = a[i];
  }
 }
}

int main(){
long long int a[] = {1,21,5,62,245,2100,2135,98,46,15,988,4561,-2,1256,115561,5646513,46541635213,-563415213,5634168531,4468431654646834,446531831516566486,468453415};
long long int mIn, mAx;
int len = sizeof(a)/sizeof(a[0]);
mInmAx(a,len,&mIn,&mAx);
cout<< mAx << "  " <<mIn;

}
