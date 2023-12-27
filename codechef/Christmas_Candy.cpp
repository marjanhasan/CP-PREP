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
        int mx = INT_MIN, idx;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > mx)
            {
                mx = a[i];
                idx = i;
            }
        }
        /* int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(a[i]==mx)
            {

            }
        } */
        cout << (n - idx - 1) << endl;
    }

    return 0;
}
