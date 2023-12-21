#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if ((n % 4 == 0) || (n % 4 == 3) || (n % 3 == 0) || (n % 3 == 4) || ((n % 4) % 3 == 0) || ((n % 3) % 4 == 0))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
