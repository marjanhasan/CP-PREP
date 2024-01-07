#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    int cnt, sol;
    cnt = sol = 0;
    for (int i = 1; i <= n; i++)
    {
        sol += (5 * i);
        if (sol + k <= 240)
            cnt++;
    }
    cout << cnt;
    return 0;
}