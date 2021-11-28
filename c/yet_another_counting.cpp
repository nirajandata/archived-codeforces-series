#include <bits/stdc++.h>
using namespace std;
int prefix[40001];
int mul;
long long solve(long long l)
{
	long long cnt = l / mul;
	int rem = l % mul;
	return prefix[mul] * 1ll * cnt + prefix[rem];
}

long long solve(long long l, long long r)
{
	return solve(r) - solve(l - 1);
}
int main(){
int t;
cin >> t;
while(t--){
	int a, b, q;
	cin >> a >> b >> q;
	mul = a * b;
	prefix[0] = 0;
	for(int i = 1; i <= mul; i++){
	  prefix[i] = prefix[i - 1];
	    if((i % a) % b != (i % b) % a)
		prefix[i]++;
		}	
	while(q--){
	    long long l,r;
	    cin >> l >> r;
	    
	    cout <<solve(l,r) << " ";
	}
	cout << "\n";
}
return 0;
}
