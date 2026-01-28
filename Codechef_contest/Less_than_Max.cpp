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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<bool> t(n + 2, false);

        t[1] = true;
        int max_l = 0;

        for (int i = 0; i < n; i++)
        {
            int c_val = arr[i];

            if (t[c_val])
            {
                max_l++;

                if (c_val + 1 <= n)
                {
                    t[c_val + 1] = true;
                }
            }
        }
        cout << max_l << endl;
    }
    return 0;
}
