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

    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    }
    vector<Edge> edgeList;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] > 0)
                edgeList.push_back(Edge(i, j, mat[i][j]));
        }
    }
    for (Edge ed : edgeList)
        cout << ed.u << " " << ed.v << " " << ed.w << nl;

    return 0;
}