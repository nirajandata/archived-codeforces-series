//https://codeforces.com/contest/891/problem/A
#include <bits/stdc++.h>
using namespace std;
int gcd(int ab, int b){
	while(b)
	{
	 ab%=b;
	 swap(ab,b);
	}
	return ab;
}
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	int ones=0;
	for(int i=0;i<n;i++) { cin >> a[i]; if(a[i]==1) ones++;}
	
	if(ones){
		cout <<n-ones  ;

	}
	else if(n==1){
		cout << -1;
	}
	else{
//	  for(auto test:a) cout <<test <<endl;
	  int i=0,j=0,fl=0,opt=1e9+3;
	  for( i=0;i<n;i++){
	  int mi=a[i];
	  for(int  k=i+1;j<n and mi>1;k++){
		  mi=gcd(mi,a[k]);
		  j=k;
	   } 
	  if(mi==1){
	//	  cout << i << " " << j << endl;
		  opt=min(j-i,opt);
		  fl=1;
	  }
	  	
	  }
	  cout <<(fl?n+opt-1:-1); 
	  }
	return 0;
}
