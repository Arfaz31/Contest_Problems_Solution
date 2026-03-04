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
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> r(n);
        int successful_turns = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > successful_turns)
            {
                r[i] = successful_turns;
                successful_turns++;
            }
            else
            {
                r[i] = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << r[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}
