#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;

    vector<Edge> EdgeList;

    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    int dis[n];
    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    dis[0] = 0;
    for (int i = 1; i < n; i++)
    {
        for (Edge e : EdgeList)
        {
            int u = e.u;
            int v = e.v;
            int c = e.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
                dis[v] = dis[u] + c;
        }
    }
    bool flag = false;
    for (Edge e : EdgeList)
    {
        int u = e.u;
        int v = e.v;
        int c = e.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            flag = true;
            break;
        }
    }
    flag ? cout << "FOUND" : cout << "NOT FOUND";
    return 0;
}