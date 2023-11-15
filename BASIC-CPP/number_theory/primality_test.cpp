#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n < 2)
        return false; // 0, 1 is not prime
    if (n <= 3)
        return true; // 2, 3 is prime
    if (n % 2 == 0)
        return false;                     //  no even int is prime except 2
    for (int i = 3; i <= sqrt(n); i += 2) // starting from 3 to every odd value
    {
        if (n % i == 0)
            return false;
    }
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
