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
        int n, x, k;
        cin >> n >> x >> k;

        int count = INT_MAX;

        for (int i = 0; i <= n; i += k)
        {
            count = min(count, abs(x - i));
        }

        cout << count << endl;
    }
    return 0;
}
