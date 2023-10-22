#include <bits/stdc++.h>
using namespace std;
int main()
{
    // internally bst(not fully bst)
    // sorted, no duplicate, search
    // ascending order
    // descending krte chaile vector e rekhe setak reverse krte hbe
    set<int> s;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(logN)
    }
    for (auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    s.count(10) ? cout << "YES" << endl : cout << "NO" << endl; // O(logN)
    return 0;
}
