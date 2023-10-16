#include <bits/stdc++.h>
using namespace std;
void max_min(int *arr, int n)
{
    int mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx)
            mx = arr[i];
        if (arr[i] < mn)
            mn = arr[i];
    }
    cout << mn << " " << mx;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    max_min(arr, n);
    return 0;
}
