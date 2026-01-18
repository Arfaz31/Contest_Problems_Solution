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

        set<long long> s;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            s.insert(x);
        }

        int ans = 0;

        for (auto v : s)
        {
            long long shift = -v;
            int cur = 0;

                      while (s.count(cur - shift))
            {
                cur++;
            }

            ans = max(ans, cur);
        }

        cout << ans << "\n";
    }

    return 0;
}
