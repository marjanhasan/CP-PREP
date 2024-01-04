#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    int cnt = 0;
    while (n != 0)
    {
        n--;
        cnt++;
        if (cnt % m == 0)
            n += 1;
    }
    cout << cnt << nl;
    return 0;
}