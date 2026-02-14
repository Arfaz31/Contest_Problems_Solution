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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long total_sum = 0;
        bool isequal = true;
        for (int i = 0; i < n; i++)
        {
            total_sum += a[i];
            if (i > 0 && a[i] != a[i - 1])
            {
                isequal = false;
            }
        }
        if (isequal)
            cout << "Yes" << endl;
        else if (n % 2 == 0 && total_sum == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
