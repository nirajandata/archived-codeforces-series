#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0),
	cin.tie(NULL);	
	int t,n;
	cin >>t;
	while(t--){
		vector <array<long long,2>> a;
		cin >>n;
		int count=0;
		for(long long  k=0;k<n;k++){
			long long input;
			cin >>input;
			a.push_back({input,k});
		}
		sort(a.begin(),a.end());
				

		for(int i=0;i<n ;i++){
	          for(int j=i+1;j<n;j++){
			long long  pro=a[i][0]*a[j][0];
			long long sum=a[i][1]+a[j][1]+2;
			if( pro==sum)
				count++;
			if(pro>2*n+1) break;
		}
		}
		cout <<count <<"\n";
	}
	return 0;
}
