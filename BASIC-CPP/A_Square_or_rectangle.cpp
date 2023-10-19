#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, w;
        cin >> h >> w;
        if (h == w)
            cout << "Square\n";
        else
            cout << "Rectangle\n";
    }
    return 0;
}
