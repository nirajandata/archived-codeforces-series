#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int a,b;
	cin >>t;
	while(t--){
		cin >> a>>b;
		int n=a-1;
		int val=0;
		int m=n%4;
		if(m==0) val=n;
	        else if(m==1) val=1;
		else if(m==2) val=n+1;	
		else val=0;
	        if (val== b) cout << a << '\n';
 	   	else if ((val ^ b) != a) cout << a + 1 << '\n';
                else cout << a + 2 << '\n';
}
	return 0;
}
