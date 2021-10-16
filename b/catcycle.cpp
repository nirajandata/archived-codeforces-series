#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
int main(){
	int t;
	cin >> t;
	while(t--){
	long long n,k;
	cin >> n >> k;
	k--;
	if(n%2==0){
	 cout <<k%(n)+1 <<ln;
	}
	else{
		int val=n/2;
		val=k/val;
		cout <<(k+val)%(n)+1 << ln;
		
	}
	}
	return 0;
}
