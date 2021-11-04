#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	 cin >> t;
	 while(t--){
	  string s;
	  cin >> s;
	   int left=0;
	   int right=s.length()-1;
	   int fl=1;
	   for(int i=right;i>=0;i--){
	     char test='a'+i;
       	     if(s[right]==test) right--;
	     else if(s[left]==test) left++;
	     else {fl=0;continue;} 
	   }
	   cout << (fl?"yes":"no") << "\n";
	 }
	return 0;
}
