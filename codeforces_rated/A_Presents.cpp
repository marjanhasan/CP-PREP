#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n], ans[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans[a[i]] = i + 1;
    }
    for (int i = 1; i <= n; i++)
        cout << ans[i] << ' ';
    return 0;
}