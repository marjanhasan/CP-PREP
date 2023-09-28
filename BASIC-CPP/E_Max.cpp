#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mx = INT_MIN;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        if (m > mx)
            mx = m;
    }
    cout << mx;
    return 0;
}
