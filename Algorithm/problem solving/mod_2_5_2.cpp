#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];
vector<int> ans;
void bfs(int src, int l)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;

    while (!q.empty())
    {
        pair<int, int> f = q.front();
        q.pop();
        int par = f.first;
        int level = f.second;
        if (level == l)
            ans.push_back(par);
        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push({child, level + 1});
                vis[child] = true;
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
    int l;
    cin >> l;
    bfs(0, l);
    sort(ans.rbegin(), ans.rend());
    for (int val : ans)
        cout << val << ' ';
    return 0;
}

/*
// level array
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];
bool vis[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

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
    int l;
    cin >> l;
    bfs(0);
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == l)
            a.push_back(i);
    }

    sort(a.rbegin(), a.rend());

    for (int val : a)
        cout << val << " ";

    return 0;
}
*/