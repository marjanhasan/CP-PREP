#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int cnt = 1;
    while (true)
    {
        if ((cnt * k) % 10 == 0 || (cnt * k) % 10 == r)
        {
            cout << cnt;
            break;
        }
        cnt++;
    }

    return 0;
}
