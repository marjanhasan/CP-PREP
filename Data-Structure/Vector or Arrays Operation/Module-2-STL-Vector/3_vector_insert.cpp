#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin() + 2, 10); // O(N)
    for (int val : v)
        cout << val << " "; // 1 2 10 3 4 5
    cout << endl;
    vector<int> v2 = {10, 20, 30};
    v.insert(v.begin() + v.size(), v2.begin(), v2.end()); // O(N+K)
    for (int val : v)
        cout << val << " "; // 1 2 10 3 4 5 10 20 30
    return 0;
}
