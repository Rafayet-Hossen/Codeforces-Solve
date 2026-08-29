#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < n;i++){
            int x;
            cin >> x;
            if(x %2 == 0)
                even++;
            else
                odd++;
        }
        
        if(odd % 2 != 0 && odd >=0){
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}