#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ln "\n"
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<array<int,5> > v(n);
		for(int i=0;i<n;i++){
		 array<int,5> inp;
		 for(int j=0;j<5;j++) cin >> inp[j];
		 v[i] = inp;
		}
	 int fl=0;
	 for(int a=0;a<5;a++){
	  for(int b=a+1;b<5;b++){
	    int c1=0,c2=0,c0=0;
	    for(int c=0;c<n;c++){
              if(v[c][a]==1 and v[c][b]==1) c1++;
	      else{
		    if(v[c][a]==1) c2++;
		    if(v[c][b]==1) c0++;
	      }

	    }
	    if(c1+c2+c0==n and c1+c2>=n/2 and c0+c1>=n/2) fl=1;
	  }
	 }
	 if(fl) cout << "YES" <<ln;
	 else cout << "NO" <<ln;
	}

	return 0;
}
