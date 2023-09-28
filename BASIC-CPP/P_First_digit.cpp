#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n /= 1000;
    n % 2 == 0 ? cout << "EVEN" : cout << "ODD";
    return 0;
}
