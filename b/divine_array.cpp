#include <bits/stdc++.h>
using namespace std;
int xlg(int ng){
	if(ng%2!=0) ng++;
	int count=0;
        while(ng!=1){
		ng/=2;
		count++;
	}	
	return count;

}
int main(){
	int t,n,flg;
	cin >> t ;
	while(t--){
		cin >> n;
		flg=xlg(n)+1;
//		cout << flg  << "flag" <<endl;
		vector<vector<int>> v(flg+1,vector<int>(n));
		map<int,int> m;
		for(int i=0;i<n;i++){
				int inp;
				cin >> inp; 
				v[0][i] =inp;
		}
		for(int i=1;i<=flg;i++){
		for(int j=0;j<n;j++){
			m[v[i-1][j]]++;
		}
		for(int j=0;j<n;j++){
		   v[i][j]=m[v[i-1][j]];
		}
		//cout << " cleared" << endl;
 		  m.clear();

		}
//		for(auto d: v) {
//			for(auto c:d) cout << c << " " ;
//			cout << endl;
//		}
		int k;
		cin >> k;
		while(k--){
			int a, b;
			cin >> a >> b;
		if(b<=flg)	cout <<v[b][a-1] << "\n";
			else cout << v[flg][a-1] << "\n";
		}

//		for(int i=0;i<n;i++) cout << v[0][i] <<endl;
	}
	return 0;
}
