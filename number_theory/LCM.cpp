#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for two numbers
    int a, b;
    cin >> a >> b;
    cout << (a / __gcd(a, b)) * b << endl;

    // for more than two numbers
    vector<int> v = {2, 7, 3, 9, 4};
    int ans = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        ans = (ans / __gcd(ans, v[i])) * v[i];
    }
    cout << ans;
    return 0;
}
