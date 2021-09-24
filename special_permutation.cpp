#include <bits/stdc++.h>
using namespace std;
void solve(int n){
	for(int i=2;i<=n;i++) cout <<i <<" ";
	cout <<1;
	cout <<"\n";
}
int main(){
	int n,t;
	cin >> t;
	while(t--){
		cin >>n;
		solve(n);
	}
	return 0;
}
