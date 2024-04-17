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
        int n, m;
        cin >> n >> m;

        /* if (n == m)
            cout << "YES";
        else if (n > m)
        {
            while (n > m)
            {
                n--;
                m++;
            }
            if (n == m)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            while (n < m)
            {
                n += 3;
                m--;
            }
            while (n > m)
            {
                n--;
                m++;
            }
            if (n == m)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << nl; */
        if ((n - m) % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << nl;
        //  i.e, (+1,-1)=2 and (-1,+3)=4 which are multiples of two
    }
    return 0;
}