#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll y = (d / b) + 1;

    (y * c < a) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}