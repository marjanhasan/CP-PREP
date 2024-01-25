#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int i = 0;
    int p = pow(10, i);
    int sum = 0;
    while (n / p != 0)
    {
        cout << ((n / p) % 10) << " "; // (n / 10^i) % 10
        sum += ((n / p) % 10);
        i++;
        p = pow(10, i);
    }
    cout << nl << sum;
    return 0;
}