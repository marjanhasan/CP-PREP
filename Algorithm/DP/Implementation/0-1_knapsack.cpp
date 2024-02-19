#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
const int N = 1005;
int weight[N];
int value[N];
int knapsack(int n, int W)
{
    if (n < 0 || W == 0)
        return 0;
    if (weight[n] <= W)
    {
        int niye = knapsack(n - 1, W - weight[n]) + value[n];
        int bad = knapsack(n - 1, W);
        return max(niye, bad);
    }
    else
    {
        int bad = knapsack(n - 1, W);
        return bad;
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> weight[i];
    for (int i = 0; i < n; i++)
        cin >> value[i];
    int W;
    cin >> W;
    cout << knapsack(n - 1, W);
    return 0;
}