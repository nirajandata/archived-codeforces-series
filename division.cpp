#include <bits/stdc++.h>
using namespace std;

long long solve(){
	long long p,q,x=1;
	cin >> p>>q;
	int n=q;
        if(p%q)  return p;
 	else{
	for(int i=1;i*i<=q;i++){
	 long long val=p; 
         if(!(q%i)){
	  if(i!=1){
		 while(!(val%q)){
				 val/=i;
				 }
		x=max(x,val);
	 }
		 val=p;
		while (!(val%q)){
				val/=q/i;
				}
		x=max(x,val);

	 }

	}
	}	
	return x;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	cout << solve() <<"\n";
	}
	return 0;
}
