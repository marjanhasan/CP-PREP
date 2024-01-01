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
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            // min = abs(first_element- second_element), max = abs(first_element, last_element)
            cout << abs(a[i] - a[i + 1]) << " " << abs(a[i] - a[n - 1]) << nl;
        }
        else if (i == n - 1)
        {
            // min = abs(last_element - previous_element), max = abs(last_element- first_element)
            cout << abs(a[i] - a[i - 1]) << " " << abs(a[i] - a[0]) << nl;
        }
        else
        {
            // min = min(abs(ith - previous),abs(ith - next)), max = max(abs(ith - first), abs(ith - last))
            cout << min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])) << " " << max(abs(a[i] - a[0]), abs(a[i] - a[n - 1])) << nl;
        }
    }
    return 0;
}