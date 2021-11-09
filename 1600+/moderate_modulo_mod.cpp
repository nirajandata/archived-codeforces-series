#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long  x,y;
		cin >> x >> y;
		if(x==y) cout <<x;
		else if (x>y) cout << x+y; 
		else {
		 cout << y-y%x/2 ;
		}
		cout << "\n";
	}
	return 0;
}
