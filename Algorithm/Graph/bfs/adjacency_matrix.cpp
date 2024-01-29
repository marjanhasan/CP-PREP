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
    int mat[n][n];
    memset(mat, 0, sizeof(mat));
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1; // directed graph e ei line likhbo na
    }
    mat[3][1] ? cout << "YES" : cout << "NO";
    cout << nl;
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