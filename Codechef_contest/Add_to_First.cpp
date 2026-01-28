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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int c_max = -1;
        bool p = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] < a[i])
            {
                p = false;
                break;
            }

            if (b[i] > a[i])
            {
                if (a[i] <= c_max)
                {
                    p = false;
                    break;
                }
            }
            c_max = max(c_max, a[i]);
        }
        if (p)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
