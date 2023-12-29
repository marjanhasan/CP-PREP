#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, x;
    cin >> n >> x;
    int cnt = 0;
    while (n--)
    {
        char c;
        cin >> c;
        int d;
        cin >> d;
        if (c == '+')
            x += d;
        else
        {
            if (x >= d)
                x -= d;
            else
                cnt++;
        }
    }
    cout << x << " " << cnt << nl;
    return 0;
}