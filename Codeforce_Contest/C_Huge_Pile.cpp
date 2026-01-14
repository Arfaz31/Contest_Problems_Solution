#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;

    long long low = n;
    long long high = n;
    int minutes = 0;

    // যতক্ষণ পর্যন্ত আমাদের স্তূপের আকার k এর চেয়ে বড় বা সমান থাকে
    while (high >= k && high > 0)
    {
        // যদি ওই ধাপের সর্বনিম্ন বা সর্বোচ্চ মান k এর সমান হয়
        if (low == k || high == k)
        {
            cout << minutes << endl;
            return;
        }

        // পরবর্তী ধাপের জন্য সর্বনিম্ন এবং সর্বোচ্চ মান বের করা
        // low এর থেকে আসবে সবচেয়ে ছোটটি, high থেকে আসবে সবচেয়ে বড়টি
        low = low / 2;
        high = (high + 1) / 2;
        minutes++;
    }

    // যদি লুপ শেষ হয়ে যায় এবং k না পাওয়া যায়
    cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}