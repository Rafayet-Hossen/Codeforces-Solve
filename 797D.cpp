// Problem: D. Black and White Stripe
// Contest: Codeforces - Codeforces Round 797 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1690/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt = 0;

    for (int i = 0; i < k; i++) {
      if (s[i] == 'W') cnt++;
    }

    int ans = cnt;

    for (int i = k; i < n; i++) {
      if (s[i - k] == 'W') cnt--;

      if (s[i] == 'W') cnt++;

      ans = min(ans, cnt);
    }

    cout << ans << '\n';
  }

  return 0;
}