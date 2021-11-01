#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s.length()<3) { cout <<0 <<"\n" ; continue;}
		int di=0,count=0;
		char ina=s[0];
		if(ina=='0') reverse(s.begin(),s.end());
		ina=s[0];
		for(int i=0;i<s.length();i++){
			if(ina=='0') di=1;
			if(di==1 and s[i]=='1') count++;
			if(i<s.length()-1){
			if(s[i]=='1' and s[i+1]=='0') di=1;
			}
		}
		cout << count << "\n";
	}
	return 0;
}
