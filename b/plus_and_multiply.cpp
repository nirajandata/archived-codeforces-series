//https://codeforces.com/contest/1542/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ln "\n";
int main(){
	int t;
	long long n,a,b;
	cin >> t;
	while(t--){
 	 cin >> n >> a >> b;
	int  fl=0;
	if(b==1) fl=1;
	if(a==1) fl=b==1||(n-1)%b==0 ?1:0; 
        else{
		 long long f=1;
	         while(f<=n){
			if((n-f)%b==0) {fl=1; break;}
			 f*=a;
		}
	}
	 cout << (fl?"Yes" : "No") <<ln
	}
	return 0;
}
