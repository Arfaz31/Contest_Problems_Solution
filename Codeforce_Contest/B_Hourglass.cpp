#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long s, k, m;
    cin >> s >> k >> m;

    long long n = m / k;
    long long sand_in_top;

    if (n == 0)
    {

        sand_in_top = s;
    }
    else if (n % 2 == 1)
    {

        sand_in_top = min(s, k);
    }
    else
    {

        sand_in_top = s;
    }

    long long time_passed_after_last_flip = m % k;
    long long remaining_sand = sand_in_top - time_passed_after_last_flip;

    if (remaining_sand < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << remaining_sand << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
