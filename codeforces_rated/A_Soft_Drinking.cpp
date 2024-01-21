#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, k, l, c, d, p, nil, np;
    cin >> n >> k >> l >> c >> d >> p >> nil >> np;
    int drinks = (k * l) / nil;
    int limes = c * d;
    int salts = p / np;
    cout << (min({drinks, limes, salts}) / n);
    return 0;
}