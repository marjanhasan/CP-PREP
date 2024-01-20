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
    if (n > 0)
        cout << n;
    else
    {
        ll lastd = (n % 10);
        n /= 10;
        ll lastbd = n / 10;
        lastbd = lastbd * 10 + lastd;
        (n > lastbd) ? cout << n : cout << lastbd;
    }
    return 0;
}