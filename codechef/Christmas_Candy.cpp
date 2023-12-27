#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int mx = INT_MIN, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > mx)
            {
                mx = a[i];
            }
            else
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
