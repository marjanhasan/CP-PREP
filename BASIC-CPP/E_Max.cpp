#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
    }
    cout << mx;
    return 0;
}
