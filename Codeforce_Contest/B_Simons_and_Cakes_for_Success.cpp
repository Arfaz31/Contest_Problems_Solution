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
        long long n;
        cin >> n;

        long long tmp = n;
        long long k = 1;

        for (long long i = 2; i * i <= tmp; i++)
        {
            if (tmp % i == 0)
            {
                k *= i;

                while (tmp % i == 0)
                    {
                        tmp /= i;
                    }
            }
        }

        if (tmp > 1)
            k *= tmp;

        cout << k << endl;
    }

    return 0;
}