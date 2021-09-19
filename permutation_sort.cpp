#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(0)->sync_with_stdio(0);
	int t,n;
	int val;
	cin  >>t;
	while(t--){
		cin >>n;
		val=0;
		vector<int> a(n);
		for(int i=0;i<n;i++) cin >>a[i];
		vector<int> test=a;
		sort(test.begin(),test.end());
		if(test==a) val=0; 
		else if(a[0]==1 or a[n-1]==n) val=1;
		else if(a[0]==n and a[n-1]==1) val=3;
		else val=2;

	cout <<val <<"\n";
	}
	return 0;
}
