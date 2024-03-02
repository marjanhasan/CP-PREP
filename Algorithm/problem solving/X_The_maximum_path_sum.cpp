#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int n, m;
int a[15][15];
ll path_sum(int i, int j)
{
    if (i == n || j == m)
        return 0;
    if (i == n - 1 && j == m - 1)
        return a[i][j];
    // if (i < n && j < m)
    //     return max(path_sum(i + 1, j) + a[i][j], path_sum(i, j + 1) + a[i][j]);
    if (i < n && j < m)
    {
        int op1 = path_sum(i + 1, j) + a[i][j];
        int op2 = path_sum(i, j + 1) + a[i][j];
        return max(op1, op2);
    }
    if (i < n)
        return path_sum(i + 1, j) + a[i][j];
    if (j < m)
        return path_sum(i, j + 1) + a[i][j];
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    cout << path_sum(0, 0);
    return 0;
}