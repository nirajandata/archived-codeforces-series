#include <bits/stdc++.h>
using namespace std;
int check(string s){
int left=0;
int right=s.length()-1;
while(left<right){
	if(s[left]!=s[right]){
		return 0;
	}
	left++; right--;
}
return 1;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(!check(s+'a')) {cout << "YES" << endl; cout <<s <<"a";}
		else if(!check('a'+s)) { cout << "YES" << endl;cout <<"a" << s;}
		else cout << "NO";
		cout << "\n";
	}
	return 0;
}
