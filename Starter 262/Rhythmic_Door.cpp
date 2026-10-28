
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int cnt = 0;
        int opn = 0;
        char lst = '\0';

        for (char c : s) {
            if (c == lst) {
                cnt++;
            } else {
                lst = c;
                cnt = 1;
            }

            if (cnt == 3) {
                opn++;
                cnt = 0;
                lst = '\0';
            }
        }

        cout << opn << '\n';
    }

    return 0;
}
