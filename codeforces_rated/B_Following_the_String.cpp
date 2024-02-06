#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    // t = 1;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
                cnt++;
        }
        string s = "";
        for (int i = 0; i < cnt; i++)
        {
            char c = i + 'a';
            s += c;
        }
        int fre[cnt] = {0};
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                for (int j = 0; j < cnt; j++)
                {
                    if (fre[j] == 0)
                    {
                        char c = j + 'a';
                        cout << c;
                        fre[j]++;
                        break;
                    }
                }
            }
            else
            {
                for (int j = 0; j < cnt; j++)
                {
                    if (arr[i] == fre[j])
                    {
                        char c = j + 'a';
                        cout << c;
                        fre[j]++;
                        break;
                    }
                }
            }
        }
        cout << nl;
    }
    return 0;
}