#include <bits/stdc++.h>
using namespace std;
int main(){
	string value="abcdefghijklmnopqrstuvwxyz";
	string inp; cin >>inp;
	int test=value.find(inp[0]);
	int rot=min(abs(test),26-test);
//	cout <<rot;
	for(int i=0;i<inp.size()-1;i++){
		int first=value.find(inp[i]);
		int second=value.find(inp[i+1]);
	///	cout <<inp[i] <<" " <<inp[i+1];
		int sub=min(abs(first-second),26-abs(first-second));
	//	cout <<sub;
	 	rot+=sub;	
		
	}
	cout <<rot;
	return 0;
}
