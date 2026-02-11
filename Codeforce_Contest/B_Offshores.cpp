#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (arr[i] / x) * y;
        }

        long long mxamount = 0;
        for (int i = 0; i < n; i++)
        {
            long long curr = sum + arr[i] - (arr[i] / x) * y;
            mxamount = max(mxamount, curr);
        }

        cout << mxamount << endl;
    }

    return 0;
}
