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

    int n;
    cin >> n;
    int s = n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
            cout << " ";
        cout << i % 3;
        for (int j = 2 * i + 1; j < 2 * s; j++)
            cout << " ";
        cout << i % 3 << nl;
    }
    for (int i = 1; i < n; i++)
    {
        cout << " ";
    }
    cout << n % 3 << nl;
    for (int i = 1; i < n; i++)
    {
        int a = (n+i)%3;
        for (int j = i + 1; j < s; j++)
            cout << " ";
        cout << a;
        for (int j = 1; j < i+i; j++)
            cout << " ";
        cout << a << nl;
    }
    return 0;
}