#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> us;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        us.insert(x);
    }

    for (auto it = us.begin(); it != us.end(); it++)
        cout << *it << " ";
    if (us.count(1))
        cout << "\nYES\n";
    else
        cout << "\nNO\n";
    if (us.find(10) != us.end())
        cout << "Yes";
    else
        cout << "NO";
    return 0;
}
