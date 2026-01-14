#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int goodPrefixes = 0;
        int balance = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                balance++;
            }
            else
            {
                balance--;
            }

            if (balance >= 0)
            {
                goodPrefixes++;
            }
        }

        cout << goodPrefixes << "\n";
    }

    return 0;
}