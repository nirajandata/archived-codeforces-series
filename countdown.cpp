#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin >> t;
	while(t--){
		cin >>n;
		string a; cin >> a;
		reverse(a.begin(),a.end());
		int s=0;
		for(int i=0;i<n;i++){
	  if(a[i]!='0'){
		  if(i==0){
			  s+=a[i]-'0';
		  }
		  else{
			  s+= a[i]-'0'+1;
		  }
		 // cout <<s <<endl;
	  }	  
	}
		cout <<s <<"\n";
		}
	return 0;
	}
