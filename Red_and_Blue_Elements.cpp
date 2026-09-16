#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;

        vector<long long> v(N);
        long long total = 0;

        for (auto &x : v) {
            cin >> x;
            total += x;
        }

        sort(v.rbegin(), v.rend());

        long long sr = 0;
        long long ans = 0;

        for (int r = 1; r <= N / 2; r++) {
            sr += v[r - 1];

            long long sb = total - sr;
            long long cb = N - r;

            long long current =
                sr * cb +
                sb * r;

            ans = max(ans, current);
        }

        cout << ans << '\n';
    }

    return 0;
}