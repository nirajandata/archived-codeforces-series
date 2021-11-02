//https://codeforces.com/contest/1344/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	int fl=1;
	vector<int> v(n);
	for(int i=0;i<n;i++){
	 cin >> v[i];
	 v[i]=((i+v[i])%n+n)%n;// for negative values
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
	if(v[i]!=i) {fl=0;break;} 
	}
	cout <<(fl? "YES" : "NO") <<"\n";
	}
	return 0;
}
