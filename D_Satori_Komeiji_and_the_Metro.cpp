#include <bits/stdc++.h>
using namespace std;

using ll = long long;

bool check(ll mid, int n, const vector<ll>& a, const vector<ll>& pref) {
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        if ((i > 1 && pref[i] > mid) || (i < n && pref[n] - pref[i - 1] > mid)) {
            sum += a[i];
            if (sum > mid) return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n + 1), pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }

    ll l = 1, r = pref[n], ans = pref[n];
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(mid, n, a, pref)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}