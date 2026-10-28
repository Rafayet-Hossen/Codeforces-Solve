
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<long long> A(N);

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int originalScore = 0;

        for (int i = 0; i < N - 1; i++)
        {
            if (A[i] == A[i + 1])
            {
                originalScore++;
            }
        }

        int bestGain = 0;
        int bestLeft = 0;

        for (int i = 0; i < N - 1; i++)
        {
            int leftGain = 0;
            int rightGain = 0;

            if (A[i] == A[i + 1])
            {
                leftGain = -1;
                rightGain = -1;
            }
            else
            {
                if (A[i] == A[i + 1] + 1)
                {
                    leftGain = 1;
                }

                if (A[i] + 1 == A[i + 1])
                {
                    rightGain = 1;
                }
            }
            bestGain = max(bestGain,
                           bestLeft + rightGain);

            bestGain = max(bestGain, leftGain);
            bestLeft = max(bestLeft, leftGain);
        }

        cout << originalScore + bestGain << '\n';
    }

    return 0;
}
