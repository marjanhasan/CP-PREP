#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q;
    cin >> q;
    priority_queue<ll, vector<ll>, greater<ll>> s1, s2;
    while (q--)
    {
        int i;
        cin >> i;
        if (i == 1)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                s1.push(x);
            else
                s2.push(x);
        }
        else if (i == 2)
        {
            if (!s1.empty())
            {
                cout << s1.top() << nl;
                s1.pop();
            }
            else
                cout << "empty" << nl;
        }
        else if (i == 3)
        {
            if (!s2.empty())
            {
                cout << s2.top() << nl;
                s2.pop();
            }
            else
                cout << "empty" << nl;
        }
    }
    return 0;
}