#include<simplecpp>

long long int bt(int n ,int r){
    if (r==0) return 1;
    else if (n<r) return 0;
    else return (bt(n-1, r)+ bt(n-1, r-1));
}

main_program{
    int n,r;
    cout << "put (n,r)\n";
    cin >> n >> r;
    cout << bt(n,r);
}
