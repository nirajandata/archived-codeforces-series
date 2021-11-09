#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >>n;
		vector<int> v(n+1);
		for(int i=1;i<=n;i++){
		  cin >> v[i];
		}
		int fl=1;
	        for(int i=1;i<=n;i++){
		fl=1;
		 for(int j=i+1;j>1;j--){
			 if(v[i]%(j)){
				 fl=0;
				 break;
			 }

		 }
		 if(fl==1) break;
		
		}	
		if(!(fl)) cout << "YES";
		else cout << "NO";
		cout << "\n";
	}
	return 0;
}
