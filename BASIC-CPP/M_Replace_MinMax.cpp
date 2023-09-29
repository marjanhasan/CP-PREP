#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mnv = INT_MAX, mxv = INT_MIN, mn, mx;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < mnv)
        {
            mn = i;
            mnv = arr[i];
        }
        if (arr[i] > mxv)
        {
            mx = i;
            mxv = arr[i];
        }
    }
    arr[mn] = mxv;
    arr[mx] = mnv;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

/*
another way,


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < mn)
            mn = arr[i];
        if (arr[i] > mx)
            mx = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mx)
        {
            arr[i] = mn;
            cout << arr[i] << " ";
            continue;
        }
        if (arr[i] == mn)
        {
            arr[i] = mx;
            cout << arr[i] << " ";
            continue;
        }
        cout << arr[i] << " ";
    }
    return 0;
}
 */