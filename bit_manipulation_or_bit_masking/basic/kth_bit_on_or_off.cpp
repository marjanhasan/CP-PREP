/*
 * author: saifabrar
 * created: 2024-04-14 07:57:25
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int check_kth_bit(int x, int k)
{
    return (x >> k) & 1;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cout << check_kth_bit(44, 3) << nl; // 1
    check_kth_bit(44, 3) ? cout << "Set" : cout << "UnSet";
    cout << nl;

    cout << check_kth_bit(44, 4) << nl; // 0
    check_kth_bit(44, 4) ? cout << "Set" : cout << "UnSet";
    cout << nl;
    return 0;
}