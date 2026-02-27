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

        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        int position = -1;
        for (int i = 0; i < n; i++)
        {
            if (p[i] == n)
            {
                position = i;
                break;
            }
        }

        if (position != 0)
        {
            swap(p[0], p[position]);
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }

    return 0;
}