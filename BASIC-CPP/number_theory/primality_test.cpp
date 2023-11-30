#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n == 1 || n == 0)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        prime(n) ? cout << "yes\n" : cout << "no\n";
    }
    return 0;
}
