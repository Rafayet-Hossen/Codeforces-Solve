// Problem: B. Fence
// Contest: Codeforces - Codeforces Round 211 (Div. 2)
// URL: https://codeforces.com/problemset/problem/363/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,sum=0,ans = 0;
	cin>>n>>k;
	vector<int>v(n);
	
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	for(int i=0;i<n;i++){
		sum += v[i];
	}
	int mini = sum;
	
	for(int i=k;i<n;i++){
		sum += v[i] - v[i-k];
		
		if(sum < mini){
			mini = sum;
			ans = i - k + 1;
		}
	}
	cout<<ans+1<<"\n";
	return 0;
}