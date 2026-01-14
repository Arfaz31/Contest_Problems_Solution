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

        string S;
        cin >> S;

        vector<int> freq(26, 0);
        for (char c : S)
            freq[c - 'a']++;

        bool possible = true;
        for (int f : freq)
        {
            if (f >= 3)
            {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
