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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        map<int, int> freq;
        set<int> distinct;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]]++;
            distinct.insert(a[i]);
        }

        int totalDis = distinct.size();
        int fVal = a[0];

        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto const &[num, count] : freq)
        {
            if (num != fVal)
            {
                pq.push(count);
            }
        }

        while (!pq.empty() && k >= pq.top())
        {
            k -= pq.top();
            pq.pop();
            totalDis--;
        }

        cout << totalDis << endl;
    }
    return 0;
}
