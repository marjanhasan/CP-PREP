#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

class Edge
{
public:
    int u, v, w;
    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }

    vector<Edge> edgeList;
    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> ed : adj[i])
            edgeList.push_back(Edge(i, ed.first, ed.second));
    }
    for (Edge ed : edgeList)
        cout << ed.u << " " << ed.v << " " << ed.w << nl;
    return 0;
}