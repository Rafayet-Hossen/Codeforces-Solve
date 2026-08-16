#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,pos=0,neg=0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = x;
            if (x == 1)
                pos++;
            else
                neg++;
        }
        int ope = 0;
        while (pos < neg || neg % 2 == 1)
        {
            ope++;
            pos++;
            neg--;
        }
        cout << ope << "\n";
    }
    return 0;
}