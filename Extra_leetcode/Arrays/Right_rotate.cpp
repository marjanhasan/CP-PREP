#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;
    /*
    O(n*2) approach
    while (k--)
    {
        int tmp = v[0];
        v[0] = v[n - 1];
        for (int i = n - 2; i >= 1; i--)
        {
            v[i + 1] = v[i];
        }
        v[1] = tmp;
    } */
    k %= v.size();
    cout << v.size() << " " << k << endl;
    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    for (int a : v)
        cout << a << " ";
    return 0;
}
