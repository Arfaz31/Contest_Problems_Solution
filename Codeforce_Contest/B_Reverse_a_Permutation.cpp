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

        vector<int> pm(n);
        for (int i = 0; i < n; i++)
        {
            cin >> pm[i];
        }

        int target_index = -1;

        for (int i = 0; i < n; i++)
        {
            if (pm[i] != n - i)
            {
                target_index = i;
                break;
            }
        }

        if (target_index != -1)
        {
            int target_val = n - target_index;
            int current_pos = -1;

            for (int j = target_index; j < n; j++)
            {
                if (pm[j] == target_val)
                {
                    current_pos = j;
                    break;
                }
            }

            reverse(pm.begin() + target_index, pm.begin() + current_pos + 1);
        }

        for (int i = 0; i < n; i++)
        {
            cout << pm[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }

    return 0;
}