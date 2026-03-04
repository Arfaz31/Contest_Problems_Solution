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
        long long n;
        cin >> n;

        long long z = n / 2;
        long long ans = z * (z + 1);
        cout << ans << endl;
    }
    return 0;
}
