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

        vector<int> arr(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int idx = -1;

        for (int i = n; i >= 1; i--)
        {
            if (arr[i] != i)
            {
                idx = i;
                break;
            }
        }

        if (idx == -1)
        {
            cout << 0 << endl;
            continue;
        }

        int min_cost = arr[idx];
        for (int i = idx; i <= n; i++)
        {
            min_cost = min(min_cost, arr[i]);
        }

        cout << min_cost << endl;
    }
    return 0;
}