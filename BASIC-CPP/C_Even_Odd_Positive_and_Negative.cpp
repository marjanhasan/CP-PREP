#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int e, o, p, ne;
    e = o = p = ne = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            e++;
        else
            o++;
        if (arr[i] > 0)
            p++;
        else if (arr[i] < 0)
            ne++;
    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << ne << endl;
    return 0;
}
