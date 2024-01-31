#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<pair<int, int>> adj[1005];
int dis[1005];

void bfs(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (!q.empty())
    {
        int par = q.front().first;
        int parCost = q.front().second;
        q.pop();

        for (pair<int, int> p : adj[par])
        {
            int child = p.first;
            int childCost = p.second;
            int newCost = parCost + childCost;

            if (newCost < dis[child])
            {
                q.push({child, newCost});
                dis[child] = newCost;
            }
        }
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
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }
    int src, des;
    cin >> src >> des;
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    bfs(src);
    cout << dis[des];
    return 0;
}