#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int y = a / 365;
    int m = (a % 365) / 30;
    int d = (a % 365) % 30;
    cout << y << " years\n";
    cout << m << " months\n";
    cout << d << " days";
    return 0;
}
