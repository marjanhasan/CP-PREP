#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    (floor((t * n) / k) > (t + d)) ? cout << "YES" : cout << "NO";
    return 0;
}
