#include <bits/stdc++.h>
using namespace std;
int const mod=1e9+7;
int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,k;
		//because in the task, max constraint is 10^5 so, 2^30 >10^5
		cin >> n>> k;
		long long count=1,ans=0;
		for(long long i=0;i<=30;i++){
		 if(k& (1<<i) ){
		   ans=(ans+count)%mod; 
		 }
		 count*=n;	
		 count%=mod;
		}
		cout << ans <<"\n";
	}
	return 0;
}
