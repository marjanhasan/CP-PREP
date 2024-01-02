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
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n, greater<int>());
    int cnt, ans;
    cnt = ans = 0;
    for (int i = 0; i < n; i++)
    {
        sum -= a[i];
        cnt += a[i];
        ans++;
        if (cnt > sum)
            break;
    }
    cout << ans;
    return 0;
}