#include <bits/stdc++.h>
using namespace std;
int main(){
     	int  t,n;
	cin >>t;
	string k,l;
	while(t--){
         cin >>n;
	       cin >>k ;
         cin >>l;
	 int value=0;
	 for(int i=0;i<n;i++){
        if(l[i] == '0') 
          continue;
        if(i > 0 and k[i - 1] == '1') {
            value++;
        }
        else if(k[i] == '0') {
            k[i] = 't';
            value++;
        }
        else if(i+1<n and k[i + 1] == '1') {
            k[i + 1] = 't';
            value++;
        }  
	 }	 
	 cout <<value <<"\n";
	}
	return 0;
}
