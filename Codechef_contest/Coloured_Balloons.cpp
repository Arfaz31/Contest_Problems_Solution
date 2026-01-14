#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int totalCost = 0;

        for (int i = 1; i <= N; i++)
        {
            int Ai;
            cin >> Ai;
            totalCost += i * Ai;
        }

        cout << totalCost << endl;
    }

    return 0;
}
