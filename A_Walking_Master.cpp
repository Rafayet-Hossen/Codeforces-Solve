#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b)
        {
            cout << -1 << "\n"; 
            continue;
        }

        int moves = d - b;

        a += moves;

        if (a < c)
        {
            cout << -1 << "\n"; 
            continue;
        }

        moves += (a - c);
        cout << moves << "\n";
    }
    return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)