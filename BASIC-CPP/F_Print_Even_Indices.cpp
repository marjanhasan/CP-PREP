#include <bits/stdc++.h>
using namespace std;
void recursion(int *arr, int n)
{
    if (n == 0)
    {
        cout << arr[0];
        return;
    }
    if (n % 2 == 0)
        cout << arr[n] << " ";
    recursion(arr, n - 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    recursion(arr, n - 1);
    return 0;
}
