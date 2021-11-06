#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main(){
	int t;
	cin >>t;
	while(t--){
	long long n;
	cin >> n;
	long long ans=1;
	for(long long i=3;i<=n*2ll;i++){
	  ans*=i;
	  ans%=mod;
	}
	cout << ans <<"\n";
	} 
	return 0;
}
