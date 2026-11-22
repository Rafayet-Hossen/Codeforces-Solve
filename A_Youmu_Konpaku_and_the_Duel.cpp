#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll getDamage(ll k, ll a) {
    ll cnt = min(k, a);

    ll total = cnt * (2 * k + 3 - cnt) / 2;

    total += a - cnt;

    return total;
}

void solve() {
    ll x;
    cin >> x;

    ll ans = x;

    for (ll k = 0; k <= x; k++) {
        ll low = 1, high = x;

        while (low < high) {
            ll mid = low + (high - low) / 2;

            if (getDamage(k, mid) >= x) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        ans = min(ans, k + low);
    }

    cout << ans << '\n';
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
