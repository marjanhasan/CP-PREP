#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--)
    {

        int n, a, b;
        cin >> n >> a >> b;

        for (int i = 0; i < n; i++)
        {
            cout << char('a' + i % b);
        }
        cout << nl;
    }
    return 0;
}