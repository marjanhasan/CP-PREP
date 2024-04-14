/*
 * author: saifabrar
 * created: 2024-04-14 07:43:34
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << (44 << 1) << nl; // 44 * 2 = 88
    cout << (44 << 2) << nl; // (44 * 2) * 2  or 44 * 2^2 = 176
    cout << (44 << 3) << nl; // ((44 * 2) * 2) * 2 or 44 * 2^3 = 352
    return 0;
}