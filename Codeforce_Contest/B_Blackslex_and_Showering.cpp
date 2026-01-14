#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int total = 0;
        for (int i = 0; i < n - 1; i++)
        {
            total += abs(a[i] - a[i + 1]);
        }

        int maxSave = 0;

        for (int i = 0; i < n; i++)
        {
            int save = 0;
            // First floor skip করলে শুধু প্রথম connection remove হয়
            if (i == 0)
            {

                save = abs(a[0] - a[1]);
            }
            // Last floor skip করলে শুধু শেষ connection remove হয়
            else if (i == n - 1)
            {

                save = abs(a[n - 2] - a[n - 1]);
            }
            // প্রতিটা floor skip করে দেখি কোনটায় সবচেয়ে বেশি save হয়
            else
            {

                int oldCost = abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]);
                int newCost = abs(a[i - 1] - a[i + 1]);
                save = oldCost - newCost;
            }
            // Minimum time
            maxSave = max(maxSave, save);
        }

        cout << total - maxSave << "\n";
    }

    return 0;
}