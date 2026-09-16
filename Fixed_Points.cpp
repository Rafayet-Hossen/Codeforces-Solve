#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k == n-1 || n-k == 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}