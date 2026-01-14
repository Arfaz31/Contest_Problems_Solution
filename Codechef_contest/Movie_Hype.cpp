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

        vector<int> A(n + 1);
        for (int i = 0; i <= n; i++)
        {
            cin >> A[i];
        }

        int ans = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int loudness = max(A[i], A[i + 1]);
            ans = min(ans, loudness);
        }

        cout << ans << "\n";
    }

    return 0;
}
