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

        vector<long long> a(n);
        long long m = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m = max(m, a[i]);
        }
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (long long x : a)
        {
            pq.push(x);
        }

        long long currMax = m;
        long long result = currMax - pq.top();

        while (!pq.empty())
        {
            long long v = pq.top();
            pq.pop();

            result = min(result, currMax - v);
            if (v > m)
                break;

            long long nextV = v * 2;
            pq.push(nextV);
            if (nextV > currMax)
            {
                currMax = nextV;
            }
        }
        cout << result << endl;
    }
    return 0;
}
