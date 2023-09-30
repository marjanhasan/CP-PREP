// frequency method

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n], cnt[m + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    for (int i = 1; i < m + 1; i++)
        cout << cnt[i] << endl;
    return 0;
}

/*
// another way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[1000001] = {0};
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (arr[num] == 0)
            arr[num] = 1;
        else
            arr[num] += 1;
    }
    for (int i = 1; i <= m; i++)
        cout << arr[i] << endl;
}

*/