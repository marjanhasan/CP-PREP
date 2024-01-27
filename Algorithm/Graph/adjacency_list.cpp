#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, e;
    cin >> n >> e;
    vector<int> mat[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a); // directed graph hoile ei line likhbo na
    }

    // long cut
    for (int i = 0; i < mat[0].size(); i++)
        cout << mat[0][i] << " ";
    cout << endl;
    // 0 er sathe k k connected
    // short cut
    for (int v : mat[0])
        cout << v << " ";
    return 0;
}

/*
input:
6 6
0 1
1 5
0 4
0 3
3 4
2 4

*/