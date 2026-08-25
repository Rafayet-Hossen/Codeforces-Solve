#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, mini = INT_MAX;
    cin >> n;
    for (int i = 1; i <= n;i++){
        int x;
        cin >> x;
        if(x < 0){
            x *= -1;
            mini = min(mini, x);
        }else{
            mini = min(mini, x);
        }
    }
    cout << mini << "\n";
    return 0;
}