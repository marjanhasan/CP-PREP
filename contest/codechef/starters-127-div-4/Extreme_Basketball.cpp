/*
 * author: saifabrar
 * created: 2024-03-27 20:32:06
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = b + 10;
        int cnt = 0;
        while (a < ans)
        {
            if (a + 3 <= ans)
                a += 3;
            else
                a += 2;
            cnt++;
        }
        cout << cnt << nl;
    }
    return 0;
}