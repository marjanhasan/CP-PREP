#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool flag = false;

    while (!q.empty())
    {
        pair<int, int> f = q.front();
        q.pop();
        int par = f.first;
        int level = f.second;

        if (par == des)
        {
            cout << level << nl;
            flag = true;
            break;
        }

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push({child, level + 1});
                vis[child] = true;
            }
        }
    }
    if (!flag)
        cout << -1 << nl;
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

    int Q;
    cin >> Q;
    while (Q--)
    {
        int s, d;
        cin >> s >> d;
        memset(vis, false, sizeof(vis));
        bfs(s, d);
    }
    return 0;
}

/*
// using level array
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];
int level[1005];

void bfs(int src, int des)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    bool flag = false;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        if (par == des)
        {
            cout << level[des] << nl;
            flag = true;
            // break;
        }

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
            }
        }
    }

    if (!flag)
        cout << -1 << nl;
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

    int Q;
    cin >> Q;
    while (Q--)
    {
        int s, d;
        cin >> s >> d;
        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(s, d);
    }
    return 0;
}
*/