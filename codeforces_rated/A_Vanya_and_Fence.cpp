#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
            sum += 2;
        else
            sum += 1;
    }
    cout << sum;
    return 0;
}
