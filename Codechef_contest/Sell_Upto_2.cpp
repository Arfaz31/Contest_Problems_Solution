#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    priority_queue<long long> pq;
    long long total_profit = 0;

    for (int i = N - 1; i >= 0; i--)
    {

        pq.push(A[i]);
        pq.push(A[i]);

        if (!pq.empty())
        {
            total_profit += pq.top();
            pq.pop();
        }
    }

    cout << total_profit << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}