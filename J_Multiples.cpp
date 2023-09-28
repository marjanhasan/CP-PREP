#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b)
        swap(a, b);
    a % b == 0 ? cout << "Multiples" : cout << "No Multiples";
    return 0;
}
