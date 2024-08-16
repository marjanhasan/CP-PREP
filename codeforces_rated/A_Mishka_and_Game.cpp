/*
 * author: marjanhasan
 * created: 2024-08-16 22:22:06
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

    int t;
    cin >> t;

    int cnt1 = 0, cnt2 = 0;
    while (t--)
    {
        int m, c;
        cin >> m >> c;
        // (m > c) ? cnt1++ : (m < c) ? cnt2++
        //                            : (cnt1++, cnt2++);
        if (m > c)
            cnt1++;
        else if (m < c)
            cnt2++;
    }

    // cout << ((cnt1 > cnt2) ? "Mishka" : (cnt1 < cnt2) ? "Chris"
    //                                                   : "Friendship is magic!^^")
    //      << nl;

    if (cnt1 > cnt2)
        cout << "Mishka" << nl;
    else if (cnt1 < cnt2)
        cout << "Chris" << nl;
    else
        cout << "Friendship is magic!^^" << nl;
    return 0;
}