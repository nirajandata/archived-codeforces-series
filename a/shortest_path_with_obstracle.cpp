#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	 int xa,ya,xb,yb,xf,yf;
	 cin >> xa >> ya >> xb >> yb >> xf >> yf ;
	 if((xf<min(xa,xb) or yf<min(ya,yb)) or (xf>max(xa,xb) or yf>max(ya,yb))){
	cout <<abs(xa-xb)+abs(ya-yb);
	 }
	 else{
	 if((xa==xb and xb==xf) or (ya==yb and yf==yb) )  cout <<max(abs(xa-xb),abs(yb-ya))+2;
	 else cout << abs(xa-xb)+abs(ya-yb);
	 }
	 cout << "\n";
	 }
	return 0;
}
