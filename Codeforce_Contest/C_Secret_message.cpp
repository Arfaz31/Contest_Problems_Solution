#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<string> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }

        // try smallest period
        for (int d = 1; d <= n; d++)
        {
            if (n % d != 0)
                continue;

            vector<char> pick(d, '?');
            bool ok = true;

            for (int r = 0; r < d && ok; r++)
            {
                vector<int> can(26, 1);

                for (int pos = r; pos < n; pos += d)
                {
                    vector<int> here(26, 0);
                    for (int j = 0; j < k; j++)
                    {
                        here[a[j][pos] - 'a'] = 1;
                    }
                    for (int c = 0; c < 26; c++)
                    {
                        can[c] &= here[c];
                    }
                }

                int found = -1;
                for (int c = 0; c < 26; c++)
                {
                    if (can[c])
                    {
                        found = c;
                        break;
                    }
                }

                if (found == -1)
                    ok = false;
                else
                    pick[r] = char('a' + found);
            }

            if (ok)
            {
                string ans;
                for (int i = 0; i < n; i++)
                {
                    ans += pick[i % d];
                }
                cout << ans << "\n";
                break;
            }
        }
    }

    return 0;
}
