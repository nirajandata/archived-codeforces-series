#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
#define ll long long
ll solve(ll a,ll b,ll c){
        ll n=max(max(b,c)-a+1,(ll)0);
	return n;
}
int main(){
  int t;
  cin >> t;
  while(t--){
   long long a,b,c;
   cin >> a >> b >> c;
   cout <<solve(a,b,c) << " " << solve(b,a,c) << " " << solve(c,a,b) <<ln;   
  }
  return 0;
}
