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
        long long k;
        cin >> n >> k;

        vector<long long> Pr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> Pr[i];
        }

        int cnt = 0;
        int i = 0;

        while (i + 1 < n)
        {
            int j = i + 1;

            while (j < n && abs(Pr[j] - Pr[i]) <= k)
                j++;

            if (j == n)
                break;

            cnt++;
            i = j;
        }

        cout << cnt << endl;
    }
    return 0;
}
