#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

const int N = 100;
vector<pair<int, int>> adj[N];
int dis[N];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        int par = pq.top().first;
        int cost = pq.top().second;
        pq.pop();

        for (pair<int, int> p : adj[par])
        {
            int child = p.first;
            int childCost = p.second;
            int newCost = cost + childCost;
            if (newCost < dis[child])
            {
                pq.push({child, newCost});
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
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    int src, des;
    cin >> src >> des;
    dijkstra(src);
    cout << dis[des] << nl;
    for (int i = 0; i < n; i++)
        cout << dis[i] << " ";
    return 0;
}