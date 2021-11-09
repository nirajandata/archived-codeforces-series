#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;char c;
		cin >> n >> c;
		int fl=1;
		string s;
		cin >> s;
		for(int i=0;i<n;i++){
		  if(s[i]!=c){
			  fl=0;
			  break;
		  }
		}
	 	if(fl) cout <<0;

		else{
		 int val=0;
		 // because max divisor of n can't be more than n/2;
		 for(int i=n/2;i<n;i++){
			 if(s[i]==c){
				 val=i+1;
				 break;
			 } 
		 }
		 if(val!=0){
			 cout <<1 <<"\n";
			 cout <<val ;
		 }
		 else{
		 cout << 2 << "\n";
		 cout <<2 <<" " <<(!(n%2)?n-1:n) ;	  
		 }
		}
		cout << "\n";
	}
	return 0;
}
