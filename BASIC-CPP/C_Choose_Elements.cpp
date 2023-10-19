#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
            break;
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
