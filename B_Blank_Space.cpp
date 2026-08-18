#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,maxi = 0,count = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n;i++){
            cin >> v[i];
        }
        for (int i = 0; i < n;i++){
            if(v[i] == 0){
                count++;
            }else{
                count = 0;
            }
            maxi = max(maxi, count);
        }
        cout << maxi << "\n";
    }
    return 0;
}