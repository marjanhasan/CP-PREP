#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

vector<int> v[1005];

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
    int node;
    cin >> node;
    cout << v[node].size();
    return 0;
}