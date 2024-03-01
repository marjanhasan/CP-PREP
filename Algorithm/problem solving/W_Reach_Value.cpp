#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pi pair<ll, ll>
bool reached(ll n, ll v)
{
    if (n == v)
        return true;
    if (n < v)
        return false;
    return reached(n, v * 20) || reached(n, v * 10);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        reached(n, 1) ? cout << "YES" : cout << "NO";
        cout << nl;
    }
    return 0;
}