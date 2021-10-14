#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t --){
		long  long n , m , i , j;
		long long x1, y1, x2 ,y2;
		cin >> n >> m >> i >> j ;
		long long mx=0,my=0;
		my=(m-j)>=(j)?m:1;
		mx=(n-i) >=(i)?n:1;
		x2=my>1?1:m;
		x1=mx>1?1:n;

	cout << x1 << " " << x2  << " "  << mx << " " << my <<"\n";
	}
	return 0;
}
