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
        long long n, q;
        cin >> n >> q;

        long long x = q + 1;
        long long y = (n + x - 1) / x;
        long long ans = y / 2;
        cout << ans << endl;
    }
    return 0;
}
