//https://codeforces.com/contest/1554/problem/A
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin >>t;
ll n,max_val,input,mul;
while(t--){
max_val=0;
cin >>n;
vector<ll> v;
for(int i=0;i<n;i++){
	cin >>input;
	v.push_back(input);
}
for (int i=0;i<(n-1);i++){
mul=v[i]*v[i+1];
max_val=max(max_val,mul);
}
cout << max_val <<"\n";
}
}
