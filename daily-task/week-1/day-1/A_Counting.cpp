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

    int a, b;
    cin >> a >> b;
    if (b > a)
        cout << (b - a) + 1;
    else
        cout << 0;
    /*
    // another way
    int cnt = 0;
    for (int i = a; i <= b; i++)
        cnt++;
    cout << cnt;
    */
    return 0;
}