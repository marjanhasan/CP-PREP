#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        int arr[n], brr[m];
        vector<int> s1, s2;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= 1 && arr[i] <= k)
                s1.push_back(arr[i]);
        }
        for (int i = 0; i < m; i++)
        {

            cin >> brr[i];
            if (brr[i] >= 1 && brr[i] <= k)
                s2.push_back(brr[i]);
        }
        if (s1.size() < (k / 2) || s2.size() < (k / 2))
        {
            cout << "NO\n";
            continue;
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        vector<int> ans;
        int i = 0, j = 0;
        while (k--)
        {
            if ()
        }
    }
    return 0;
}