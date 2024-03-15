#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    if (s.size() == 4)
        cout << s;
    else if (s.size() == 3)
        cout << "0" << s;
    else if (s.size() == 2)
        cout << "00" << s;
    else
        cout << "000" << s;
    /*
    second way

    int n;
    cin >> n;
    if (n < 10)
        cout << "000" << n;
    else if (n < 100)
        cout << "00" << n;
    else if (n < 1000)
        cout << "0" << n;
    else
        cout << n;
    */

    /*
    third way

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= 4; i++)
    {
        v.push_back(n % 10);
        n = n / 10;
    }
    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i];
    */
    return 0;
}