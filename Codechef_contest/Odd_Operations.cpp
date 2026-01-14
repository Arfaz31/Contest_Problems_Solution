#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string N;
    cin >> N;

    int len = N.length();
    int lastDigit = N[len - 1] - '0';

    if (lastDigit % 2 != 0)
    {
        cout << 0 << endl;
        return;
    }

    bool hasOdd = false;
    for (char c : N)
    {
        if ((c - '0') % 2 != 0)
        {
            hasOdd = true;
            break;
        }
    }
    if (hasOdd)
    {
        cout << 1 << endl;
        return;
    }

    if (len == 1)
    {

        cout << -1 << endl;
    }
    else
    {
        bool canBorrowImmediately = false;

        for (int i = 0; i < len - 1; i++)
        {
            if ((N[i] - '0') > lastDigit)
            {
                canBorrowImmediately = true;
                break;
            }
        }

        if (canBorrowImmediately)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
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