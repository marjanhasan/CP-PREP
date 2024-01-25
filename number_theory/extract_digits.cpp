#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void extract_digit(int n)
{
    if (n == 0)
        return;
    cout << n % 10 << " ";
    extract_digit(n / 10);
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    extract_digit(n);
    // using formula
    /* int i = 0;
    int p = pow(10, i);
    int sum = 0;
    while (n / p != 0)
    {
        // (n / 10^i) % 10
        // from right to left
        cout << ((n / p) % 10) << " ";
        sum += ((n / p) % 10);
        i++;
        p = pow(10, i);
    }
    cout << nl << sum; */
    return 0;
}