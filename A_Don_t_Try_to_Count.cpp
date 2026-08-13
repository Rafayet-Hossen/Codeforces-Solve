#include <bits/stdc++.h>
using namespace std;
bool check(string x, string s)
{
    if (x.find(s) != string::npos)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, found = 0;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        string x0 = x;
        string x1 = x + x;
        string x2 = x1 + x1;
        string x3 = x2 + x2;
        string x4 = x3 + x3;
        string x5 = x4 + x4;
        if (check(x0, s))
            cout << "0\n";
        else if (check(x1, s))
            cout << "1\n";
        else if (check(x2, s))
            cout << "2\n";
        else if (check(x3, s))
            cout << "3\n";
        else if (check(x4, s))
            cout << "4\n";
        else if (check(x5, s))
            cout << "5\n";
        else
            cout << "-1\n";
    }
    return 0;
}