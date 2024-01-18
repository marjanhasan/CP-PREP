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

        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == c[i]) || (b[i] == c[i]))
            {

                flag = false;
                break;
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}