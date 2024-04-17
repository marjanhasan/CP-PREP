/*
 * author: saifabrar
 * created: 2024-04-08 21:07:40
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
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll a[n],sum=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum+=a[i];
        }
        if(sum<=k)
        {
            cout<<n<<nl;
            continue;
        }
        int i = 0, j = n - 1;
        while (k)
        {
            if (i < n)
            {
                if (a[i] != 0)
                {
                    a[i]--;
                    k--;
                }
                else
                {
                    i++;
                    if (i < n )
                    {
                        a[i]--;
                        k--;
                    }
                }
            }
            if (k == 0)
                break;
            if (j >= 0)
            {

                if (a[j] != 0)
                {
                    a[j]--;
                    k--;
                }
                else
                {
                    j--;
                    if (j >= 0 )
                    {
                        a[j]--;
                        k--;
                    }
                }
            }
        }
        int sz = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                sz++;
        }
        cout << sz << nl;
    }
    return 0;
}