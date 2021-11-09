#include <bits/stdc++.h>
using namespace std;
typedef  long long  ll;
int main(){
	 ll  mod=1e9+7;
	int t;
	cin >> t;
	while(t--){
	 ll  n;
	 cin >> n;
	 ll  val=n%mod; 
	 ll  lc=1,fa=1;
	 while(1){
	  lc=lcm(lc,fa);
	  if(lc>n) break;
	  val+=n/lc;
	  val%=mod;
	  fa++;
	 }
	 cout << val << "\n";
	}
	return 0;
}
