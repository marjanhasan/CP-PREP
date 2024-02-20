#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
const int N = 105;
int weight[N];
int value[N];
int knapsack(int n, int w)
{
    if (n < 0 || w == 0)
        return 0;
    if (weight[n] <= w)
    {
        int nibo = knapsack(n - 1, w - weight[n]) + value[n];
        int bad = knapsack(n - 1, w);
        return max(nibo, bad);
    }
    else
    {
        int bad = knapsack(n - 1, w);
        return bad;
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, w;
    cin >> n >> w;
    for (int i = 0; i < n; i++)
        cin >> weight[i] >> value[i];
    cout << knapsack(n - 1, w);
    return 0;
}