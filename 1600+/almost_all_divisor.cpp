#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<long long> d(n);
		for(int i=0;i<n;i++) cin >> d[i];
		sort(d.begin(),d.end());
		long long mi=d[0]*d[n-1];
		vector<long long > same;
		for(long long i=2;i*i<=mi;i++){
	 	  if(!(mi%i)) {
			  same.push_back(i);
			  long long j=mi/i;
			 if(i!=j and !(mi%j)) same.push_back(j);

		  }	  
		}
		sort(same.begin(),same.end());
	//	cout <<"for same" <<endl;
	//	for(auto dc:same) cout << dc <<endl;
	//	for(auto dm:d) cout << dm <<endl;
		cout << (same==d?mi:-1) <<"\n";
	}
	return 0;
}
