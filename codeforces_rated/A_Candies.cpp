#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        for (int k = 2; k < 30; k++)
        {
            int x = pow(2, k) - 1;
            if (n % x == 0)
            {
                cout << n / x << nl;
                break;
            }
        }
    }
    return 0;
}