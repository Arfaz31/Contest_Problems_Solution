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
        int m = 0;
        int cst = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x >= 1)
            {
                cst++;
                m = max(m, cst);
            }
            else
            {
                cst = 0;
            }
        }
        cout << m << endl;
    }
    return 0;
}
