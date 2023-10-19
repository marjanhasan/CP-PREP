#include <bits/stdc++.h>
using namespace std;
long long int recursion(long long int *arr, long long int n)
{
    if (n == 0)
    {
        return arr[n];
    }
    return arr[n] += recursion(arr, n - 1);
}
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long int sum = recursion(arr, n - 1);
    cout << sum;
    return 0;
}
