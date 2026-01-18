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
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> original = a;

        for (int i = 0; i < m; i++)
        {
            int b;
            long long c;
            cin >> b >> c;
            b--;

            a[b] += c;
            if (a[b] > h)
            {
                a = original;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
