#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve() {
    int n;
    ll x;
    cin >> n >> x;

    vector<ll> h(n);
    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        h[i] = (a + x - 1) / x;
    }

    sort(h.begin(), h.end());

    ll ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, h[i] - (i + 1));
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}