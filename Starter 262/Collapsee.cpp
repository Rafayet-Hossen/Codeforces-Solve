#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> s(n);

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }

        long long ans = 0;

        for (int i = 0; i < n - 2; i++)
        {
            ans += abs(s[i]);
        }

        ans -= s[n - 2];
        ans += s[n - 1];

        cout << ans << '\n';
    }

    return 0;
}