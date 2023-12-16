#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int p = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            p += a[i];
        else
        {
            c++;
            if (p > 0)
            {
                p--;
                c--;
            }
        }
    }
    cout << c;
    return 0;
}
