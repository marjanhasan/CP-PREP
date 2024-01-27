#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        if (v[i] < 0)
            sum -= v[i];
    }
    cout << sum;
    return 0;
}