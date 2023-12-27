#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int w = x * y;

        int ans = floor(z / (2 * w));
        cout << ans << endl;
    }

    return 0;
}
