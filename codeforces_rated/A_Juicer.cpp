#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int a[n];
    int sum, cnt;
    sum = cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > b)
            continue;
        sum += a[i];
        if (sum > d)
        {
            sum = 0;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
