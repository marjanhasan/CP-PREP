#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    (min(n, m) % 2 == 0) ? cout << "Malvika" : cout << "Akshat";
    return 0;
}