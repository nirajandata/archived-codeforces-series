#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	 int n;
	 cin >> n;
	 vector<int> a(n),b(n);
	 for(int i=0;i<n;i++) cin >>a[i];
         int  dac=(n%2?n-3:n);
	 for(int i=0;i<dac-1;i+=2){
	  b[i]=-a[i+1];b[i+1]=a[i]; 
	 }
	 if(dac==n-3){
		 int i=n;
		 if(a[i-1]+a[i-2]!=0) {
		  b[i-3]=a[i-1]+a[i-2];
		  b[i-2]=-a[i-3];
		  b[i-1]=b[i-2];
		 }
		 else if(a[i-2]+a[i-3]!=0){
		 b[i-1]=a[i-2]+a[i-3];
		 b[i-2]=-a[i-1];
		 b[i-3]=b[i-2];
		 }
		 else{
		  b[i-2]=a[i-1]+a[i-3];
		  b[i-1]=-a[i-2];
		  b[i-3]=b[i-1];
		 }
	 }
	 for(auto d:b) cout << d << " " ;
	 cout << "\n";
	}
	return 0;
}
