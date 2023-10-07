#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q;
    cin >> n >> q;
    long long arr[n], pre[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // 6 4 2 7 2 7
    pre[0] = arr[0];
    for (int i = 1; i < n; i++)
        pre[i] = arr[i] + pre[i - 1]; // 6 10 12 19 21 28
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum = 0;
        if (l == 0)
            sum = pre[r];
        else
            sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }
    return 0;
}
