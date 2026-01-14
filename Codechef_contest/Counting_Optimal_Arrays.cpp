#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        long long N, M;
        cin >> N >> M;

        // Case N = 1
        if (N == 1)
        {
            cout << (M + 1) % MOD << "\n";
            continue;
        }

        // Find k such that 2^k > M
        int k = 0;
        while ((1LL << k) <= M)
            k++;

        long long maxXor = (1LL << k) - 1;

        long long ans = 2 * M - maxXor + 1;
        if (ans < 0)
            ans = 0;

        cout << ans % MOD << "\n";
    }

    return 0;
}
