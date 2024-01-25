#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

int factorial(int n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}