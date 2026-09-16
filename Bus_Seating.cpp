#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k-n >=0)
            cout << (k-n) * 2 << "\n";
        else
            cout << "0\n";
    }
}