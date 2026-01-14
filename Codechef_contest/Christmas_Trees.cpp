#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, m, b;
    cin >> n >> a >> m >> b;
    int totalCost = n * a;
    int totalSell = m * b;

    int profit = totalSell - totalCost;

    cout << profit << endl;
    return 0;
}
