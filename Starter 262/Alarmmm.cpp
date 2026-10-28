
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int alarms = 0;
        int lstPro = -1;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1' && i > lstPro)
            {
                int pos = min(n - 1, i + k);
                alarms++;
                lstPro = pos;
            }
        }

        cout << alarms << '\n';
    }

    return 0;
}
