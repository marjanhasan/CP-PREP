#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    while (n--)
    {
        ll a;
        cin >> a;
        ll r = sqrt(a);
        (r * r != a) ? cout << "yes\n" : cout << "no\n";
    }
    return 0;
}