#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        for (int i = 1; i < n; i++)
        {
            int j = i;
            while (j > 0 && p[j] < p[j - 1] && abs(p[j] - p[j - 1]) > 1)
            {
                swap(p[j], p[j - 1]);
                j--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << p[i] << (i + 1 == n ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}