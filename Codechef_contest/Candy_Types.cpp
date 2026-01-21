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

        vector<int> freq(N + 1, 0);

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
        }

        int maxFreq = 0;
        int answer = 1;

        for (int color = 1; color <= N; color++)
        {
            if (freq[color] > maxFreq)
            {
                maxFreq = freq[color];
                answer = color;
            }
        }

        cout << answer << endl;
    }
    return 0;
}
