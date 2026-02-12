#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, x, total = 0;
        cin >> n >> s >> x;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            total += val;
        }
        if (total == s)
        {
            cout << "YES\n";
        }
        else
        {
            while (true)
            {
                total += x;
                if (total == s)
                {
                    cout << "YES\n";
                    break;
                }
                else if (total > s)
                {
                    cout << "NO\n";
                    break;
                }
            }
        }
    }
}