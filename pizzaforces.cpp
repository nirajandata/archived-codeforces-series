//https://codeforces.com/contest/1555/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
    cin.tie(0);
	long long t,n,min_val;
	min_val=6;
	cin >>t;
	for(int i=0;i<t;i++){
	cin >>n;
	n=max(min_val,n) ; 
	if(n%2!=0)
	n+=1;

	n=(n)*5/2;
	cout <<n <<"\n";

	}
}
