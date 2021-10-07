#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >>t;
	long long a,b;
	while(t--){
 	 cin >> a >>b;
	 vector<long long> n(a);
	 for(int i=0;i<a;i++) cin >> n[i];
	 sort(n.begin(),n.end());
	 int ns=n.size();
	 long long ma=n[ns-1],ms=n[ns-2];
	 if(ma>=b) cout <<1 <<"\n";         
	 else if((ma+ms)>=b) cout <<2 <<"\n";
	 else {

		long long  ans=(b/(ms+ma))*2;
		long long md=b%(ms+ma);
		if(md==0) cout <<ans <<"\n";
		else if(ma>=md) cout <<ans+1 <<"\n";
		else cout <<ans+2<<"\n";
	 }
	}
	return 0;
}
