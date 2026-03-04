#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if (x > y)
        cout << "Alice";
    else if (x < y)
        cout << "Bob";
    else
        cout << "Draw";

    return 0;
}
