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
        int x, y, z;
        cin >> x >> y >> z;
        int total_pairs = min(x, z) + (y / 2);
        cout << total_pairs << endl;
    }
    return 0;
}
