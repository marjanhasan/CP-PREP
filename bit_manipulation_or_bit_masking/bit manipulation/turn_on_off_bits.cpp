/*
 * author: saifabrar
 * created: 2024-04-14 08:48:29
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

int turn_on_bits(int x, int k)
{
    return (x | (1 << k));
}

int turn_off_bits(int x, int k)
{
    return (x & (~(1 << k)));
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << turn_on_bits(44, 4) << nl;
    cout << turn_off_bits(44, 3) << nl;
    return 0;
}