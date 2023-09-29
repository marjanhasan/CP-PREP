#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n], mn = INT_MAX, in;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < mn)
        {
            mn = arr[i];
            in = i;
        }
    }
    cout << mn << " " << in + 1 << endl;
    return 0;
}
