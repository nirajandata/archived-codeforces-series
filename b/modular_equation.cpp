#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin >> a >> b;
	if(a<b) cout << 0;
	else if(a==b) cout <<"infinity";
	else{
		int count=0,sub=a-b;
		for(int i=1;i*i<=sub;i++){
		 if(sub%i==0){
			 if(a%i==b) count++;
			 int j=sub/i;
			 if(i!=j and a%j==b) count++;
		 }
		}
		cout <<count;
	}
	return 0;
}
