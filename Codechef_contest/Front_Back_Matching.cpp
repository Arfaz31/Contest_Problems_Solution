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
        vector<int> freq(26, 0);

        for (char c : s)
        {
            freq[c - 'a']++;
        }

        bool possible = false;
        for (int count : freq)
        {
            if (count >= 2)
            {
                possible = true;
                break;
            }
        }

        if (possible)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
