/*
 * author: saifabrar
 * created: 2024-04-14 08:13:53
 * problem link:
 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define pii pair<ll, ll>

int check_on_off_bits(int x, int k)
{
    return (x >> k) & 1;
}

void print_number_of_on_off_bits(int x)
{
    int on = 0, off = 0;
    for (int k = 0; k < 32; k++)
    {
        if (check_on_off_bits(x, k))
        {
            cout << 1 << " ";
            on++;
        }
        else
        {
            cout << 0 << " ";
            off++;
        }
    }
    cout << nl;
    cout << "On bits: " << on << nl;
    cout << "Off bits: " << off << nl;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    print_number_of_on_off_bits(45);
    return 0;
}