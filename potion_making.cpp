#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
	if(a==0) return b;
	else if(b==0)  return a;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else b=b-a;
	}
	return a;
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int t,k;
	cin >>t;
	while(t--){
	   cin >> k;
	   cout <<100/gcd(100,k) <<"\n";
	}
	return 0;
}
