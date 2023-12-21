#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 0)
        {
            for (int i = n; i >= 1; i--)
                cout << i << " ";
            cout << endl;
                }
        else if (k == n - 1)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            for (int i = n; i > k + 1; i--)
                cout << i << " ";
            for (int i = 1; i <= k + 1; i++)
                cout << i << " ";
            cout << endl;
        }
    }

    return 0;
}
