#include <simplecpp>

main_program{
	int n, nfac=1, i=1;
	cin>>n;
	repeat(n/2){
		nfac = nfac * i * 2;
		i = i + 1;
	}
	cout<<nfac<<endl;
}
