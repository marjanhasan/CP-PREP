#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mn)
            cnt++;
    }
    if (cnt % 2 == 1)
        cout << "Lucky";
    else
        cout << "Unlucky";
    return 0;
}
