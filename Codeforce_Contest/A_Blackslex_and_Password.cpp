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
        int k, x;
        cin >> k >> x;
        int ans = k * x + 1;
        cout << ans << "\n";
    }
    return 0;
}

// উদাহরণ 3 2 string: "aabccb"

// Position: 0=a, 1=a, 2=b, 3=c, 4=c, 5=b
// Group 0 (0,2,4): a, b, c ✓ (সব আলাদা)
// Group 1 (1,3,5): a, c, b ✓ (সব আলাদা)

// n=7 এর জন্য (অসম্ভব):
// Index: 0, 1, 2, 3, 4, 5, 6

// Group 0: index 0, 2, 4, 6 → চারটি জায়গা
// Group 1: index 1, 3, 5 → তিনটি জায়গা

// সমস্যা: Group 0 এর চারটি index এ চারটি আলাদা অক্ষর লাগবে। কিন্তু আমাদের কাছে মাত্র 3টি অক্ষর আছে (a, b, c)!
// তাই n=7 এ valid string তৈরি করা অসম্ভব। 🎯

// সূত্র আবার:

// x টি group আছে (mod x অনুযায়ী)
// প্রতিটি group এ সর্বোচ্চ k টি element রাখা যায় (কারণ k টি আলাদা অক্ষর)
// সর্বোচ্চ n = k × x
// তাই minimum impossible n = k × x + 1
