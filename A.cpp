// Problem: A. Riptide
// Contest: Codeforces - Codeforces Round 1114 (Div. 3)
// URL: https://codeforces.com/contest/2254/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
#define FAST ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
int main(){
	FAST;
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a==b || a==c || b==c){
			cout<<"0\n";
		}else{
			int ans = min(abs(a-b),min(abs(a-c),abs(b-c)));
			cout<<ans<<"\n";
		}
		
	}
	return 0;
}