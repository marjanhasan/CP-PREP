#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1, s = n - 1;
    for (int i = 1; i <= n * 2; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= s; j++)
                cout << " ";
            for (int j = 1; j <= k; j++)
                cout << "*";
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= s; j++)
                cout << " ";
            for (int j = 1; j <= k; j++)
                cout << "*";
            cout << endl;
        }
        if (i < n)
        {
            s--;
            k += 2;
        }
        else if (i > n)
        {
            s++;
            k -= 2;
        }
    }
    return 0;
}
