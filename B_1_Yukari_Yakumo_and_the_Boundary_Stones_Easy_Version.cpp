#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, m;
    cin >> x >> y >> m;
    string s;
    cin >> s;
    int max_c2 = y + m;
    vector<int> dp(max_c2 + 1, -1);
    dp[y] = x;

    int ans = x + y;

    for (int i = 0; i < m; i++) {
        vector<int> ndp(max_c2 + 1, -1);
        for (int c2 = 0; c2 <= max_c2; c2++) {
            if (dp[c2] == -1) continue;
            int c1 = dp[c2];
            if (c1 == 0 && c2 == 0) continue;

            if (s[i] == '+') {
                if (c2 > 0) {
                    ndp[c2 + 1] = max(ndp[c2 + 1], c1);
                } else {
                    ndp[1] = max(ndp[1], c1 - 1);
                }
            } else {
                if (c2 > 0) {
                    ndp[c2 - 1] = max(ndp[c2 - 1], c1 + 1);
                }
                if (c1 > 0) {
                    ndp[c2] = max(ndp[c2], c1 - 1);
                }
            }
        }
        dp = move(ndp);
        for (int c2 = 0; c2 <= max_c2; c2++) {
            if (dp[c2] != -1) {
                ans = max(ans, dp[c2] + c2);
            }
        }
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