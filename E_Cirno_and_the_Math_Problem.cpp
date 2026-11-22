
#include <bits/stdc++.h>
using namespace std;

long long getDamage(long long k, long long a) {
    long long cnt = min(k, a);

    long long total = cnt * (2 * k + 3 - cnt) / 2;

    total += a - cnt;

    return total;
}

void solve() {
    long long x;
    cin >> x;

    long long ans = x;

    for (long long k = 0; k <= x; k++) {
        long long low = 1, high = x;

        while (low < high) {
            long long mid = low + (high - low) / 2;

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
