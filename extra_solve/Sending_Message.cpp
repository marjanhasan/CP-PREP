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

    string a, b;
    while (cin >> a >> b)
    {
        int j = 0, cnt = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (j < b.size() && a[i] == b[j])
            {
                cnt++;
                j++;
            }
        }
        if (cnt == b.size())
            cout << "Possible";
        else
            cout << "Impossible";
        cout << nl;
    }
    return 0;
}