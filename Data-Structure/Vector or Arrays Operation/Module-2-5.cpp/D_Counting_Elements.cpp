#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int cnt = 0;
    for (int val : v)
    {
        int s = val + 1;
        auto it = find(v.begin(), v.end(), val + 1);
        if (it == v.end())
            continue;
        else
            cnt++;
    }
    /*
    // another way of traversal
    for (int i = 0; i < n; i++)
    {
        auto it = find(v.begin(), v.end(), v[i] + 1);
        if (it == v.end())
            continue;
        else
            cnt++;
    } */
    cout << cnt;
    return 0;
}
