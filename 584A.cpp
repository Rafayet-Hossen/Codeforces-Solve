// Problem: A. Olesya and Rodion
// Contest: Codeforces - Codeforces Round 324 (Div. 2)
// URL: https://codeforces.com/problemset/problem/584/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, t;
  string s = "";
  cin >> n >> t;
  if (t == 10 && n == 1) {
    cout << "-1\n";
  } else if (t == 10) {
    for (int i = 1; i < n; i++) {
      s += "1";
    }
    s += "0";
    cout << s << "\n";
  } else {
    string val = to_string(t);
    for (int i = 1; i <= n; i++) {
      s += val;
    }
    cout << s << "\n";
  }

  return 0;
}