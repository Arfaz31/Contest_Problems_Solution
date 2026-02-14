#include <bits/stdc++.h>
using namespace std;

long long int dSum(long long int n)
{
    long long totalSum = 0;
    while (n > 0)
    {
        totalSum += n % 10;
        n /= 10;
    }
    return totalSum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long int x;
        cin >> x;

        int ans = 0;

        for (long long y = x; y <= x + 90; y++)
        {
            if (y - dSum(y) == x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
