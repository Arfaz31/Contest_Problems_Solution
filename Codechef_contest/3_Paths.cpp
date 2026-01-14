#include <bits/stdc++.h>
using namespace std;

int grid[55][55];
int n;

vector<pair<int, int>> d = {{0, 1}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
        return false;
    if (grid[i][j] == 0)
        return false;
    return true;
}

int countPaths(int si, int sj)
{

    if (si == n - 1 && sj == n - 1)
    {
        return 1;
    }

    int totalPaths = 0;

    for (int i = 0; i < 2; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj))
        {
            totalPaths += countPaths(ci, cj);
        }
    }

    return totalPaths;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        cin >> n;

        if (n == 2)
        {
            cout << -1 << "\n";
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                grid[i][j] = 1;
            }
        }

        for (int i = 1; i < n; i++)
        {
            grid[i][0] = 0;
        }

        int pathCount = countPaths(0, 0);

        if (pathCount == 3)
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << grid[i][j];
                    if (j < n - 1)
                        cout << " ";
                }
                cout << "\n";
            }
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}