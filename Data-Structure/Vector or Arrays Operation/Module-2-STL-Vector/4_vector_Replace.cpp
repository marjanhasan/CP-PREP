#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 3, 2, 3, 5, 6, 3, 2, 8};
    replace(v.begin(), v.end(), 2, 100);
    for (int x : v)
        cout << x << " ";
    return 0;
}
