#include <bits/stdc++.h>
using namespace std;
int main()
{
    float x, p;
    cin >> x >> p;
    float sum = p * (100 / (100 - x));
    cout << fixed << setprecision(2) << sum;
    return 0;
}
