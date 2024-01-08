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
    int n, p;
    while (t--)
    {
        cin >> n;
        p = 1;
        vector<int> ans;
        while (n > 0)
        {
            if (n % 10 > 0)
                ans.push_back((n % 10) * p);
            n /= 10;
            p *= 10;
        }
        cout << ans.size() << nl;
        for (int v : ans)
            cout << v << " ";
        cout << nl;
    }
    return 0;
}