#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    sort(a, a + 12, greater<int>());
    int cnt = 0;
    for (int i = 0; i < 12; i++)
    {
        if (k <= 0)
            break;
        k -= a[i];
        cnt++;
    }
    if (k <= 0)
        cout << cnt;
    else if (k > 0)
        cout << -1;
    return 0;
}