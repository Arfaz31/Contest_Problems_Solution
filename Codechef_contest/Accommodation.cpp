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
        long long b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;
        if (n < x + y)
        {
            cout << -1 << endl;
            continue;
        }
        long long minRoom = (b + g + n - 1) / (n); // room = b+g/n ceil(n-1/n)
        long long maxRoom = min(b / x, g / y);     // because atleas x,y required for per room that's why min which is the max rooms possible
        if (minRoom <= maxRoom)
        {
            cout << minRoom << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
