#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true; // queue te rakhba visit true kre diba
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // jabotio kaj
        cout << par << " ";

        // child ber kra
        for (int child : v[par])
        {
            // already visit thakle ignore krbo naile infinity loop hye jabe
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true; // queue te rakhba visit true kre diba
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
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src);
    return 0;
}