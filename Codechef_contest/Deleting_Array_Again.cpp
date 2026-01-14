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

        vector<int> a(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> c[i];

        long long ans = 0;
        int minC = c[0];
        for (int i = 0; i < n; i++)
        {
            minC = min(minC, c[i]);
            ans += (long long)a[i] * minC;
        }
        cout << ans << endl;
    }
    return 0;
}
