#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    vector<int> x, y, z;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            x.push_back(i + 1);
        else if (a[i] == 2)
            y.push_back(i + 1);
        else
            z.push_back(i + 1);
    }
    int mn = min(x.size(), min(y.size(), z.size()));
    cout << mn << nl;
    for (int i = 0; i < mn; i++)
    {
        cout << x[i] << " " << y[i] << " " << z[i] << endl;
    }
    return 0;
}