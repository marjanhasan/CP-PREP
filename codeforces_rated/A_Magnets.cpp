#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++)
        cin >> m[i];
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (m[i] != m[i + 1])
            cnt++;
    }
    cout << cnt;
    return 0;
}
