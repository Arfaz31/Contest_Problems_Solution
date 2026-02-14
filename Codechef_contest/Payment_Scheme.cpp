#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    int op1 = 100 + 4 * x;
    int op2 = 300;
    cout << min(op1, op2) << endl;
    return 0;
}
