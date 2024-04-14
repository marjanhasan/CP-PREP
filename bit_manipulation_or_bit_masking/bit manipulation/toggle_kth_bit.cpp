/*
 * author: saifabrar
 * created: 2024-04-14 09:10:08
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

int toggle_kth_bit(int x, int k)
{
    return x ^ (1 << k);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << toggle_kth_bit(44, 3) << nl;
    return 0;
}