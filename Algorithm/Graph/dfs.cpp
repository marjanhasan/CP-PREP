#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
const int N = 1e5 + 5;

vector<int> v[N];
bool vis[N];

void dfs(int src)
{
    cout << src << " ";
    vis[src] = true;
    for (int child : v[src])
    {
        if (!vis[child])
            dfs(child);
    }
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(0);
    return 0;
}