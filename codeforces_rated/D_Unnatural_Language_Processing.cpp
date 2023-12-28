#include <bits/stdc++.h>
using namespace std;
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
        char c[n];
        for (int i = 0; i < n; i++)
            cin >> c[i];
        cout << c[0];
        int i = 1;
        while (i < n - 1)
        {
            if (c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
            {
                cout << c[i];
            }
            else
            {
                if (c[i + 1] == 'a' || c[i + 1] == 'e' || c[i + 1] == 'i' || c[i + 1] == 'o' || c[i + 1] == 'u')
                {
                    cout << '.' << c[i];
                }
                else if (c[i + 1] != 'a' || c[i + 1] != 'e' || c[i + 1] != 'i' || c[i + 1] != 'o' || c[i + 1] != 'u')
                {
                    cout << c[i];
                }
            }
            i++;
        }
        cout << c[n - 1];
        cout << nl;
    }
    return 0;
}