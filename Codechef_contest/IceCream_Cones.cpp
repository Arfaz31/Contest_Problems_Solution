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
        int x, y, n;
        cin >> x >> y >> n;
        int rem = x - (y * n);
        if (rem < 0)
        {
            rem = 0;
        }
        cout << rem << endl;
    }
    return 0;
}
