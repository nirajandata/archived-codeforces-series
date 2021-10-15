// https://codeforces.com/contest/1530/problem/A
#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
   string n;
   cin >> n;
   sort(n.rbegin(),n.rend());
   cout << n[0] << "\n";
  }
  return 0;
}
