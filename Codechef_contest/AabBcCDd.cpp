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
        string s;
        cin >> s;
        int freq[26] = {0};
        for (char c : s)
        {
            freq[tolower(c) - 'a']++;
        }
        priority_queue<int> pq;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                pq.push(freq[i]);
            }
        }
        int ans = 0;
        if (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        if (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}
