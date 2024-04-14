/*
 * author: saifabrar
 * created: 2024-04-14 07:46:59
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

    cout << (44 >> 1) << nl; // 44 / 2 = 22
    cout << (44 >> 2) << nl; // (44 / 2) / 2 or 44 / 2^2 = 11
    cout << (44 >> 3) << nl; // ((44 / 2) / 2) / 2 or 44 / 2^3 = 5
    return 0;
}