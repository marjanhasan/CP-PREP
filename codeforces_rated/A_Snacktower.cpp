#include <bits/stdc++.h>
using namespace std;
int n, b;
main()
{
    cin >> n; // 3
    int a[n + 1] = {0};
    while (n)
    {
        cin >> b; // 3
        a[b] = 1; //
        while (a[n])
            cout << n-- << " ";
        cout << endl;
    }
}