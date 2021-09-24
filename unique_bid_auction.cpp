#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int a,n;
	cin >>t;
	while(t--){
	cin >>n;
	vector<int> v(n+1),ind(n+1);
	for(int i=1;i<=n;i++){
		cin >> a;
		v[a]++; // since a<=n , it's safe to use it
		ind[a]=i;
	}
	int c=-1;
	for(int i=1;i<=n;i++){
	 if(v[i]==1) {
		 c=ind[i]; // since, it's already in ascending order, min valu is will in the first 
		 break;
	}	
	 }
	
	 cout <<c <<"\n" ;
	}
	return 0;
}
