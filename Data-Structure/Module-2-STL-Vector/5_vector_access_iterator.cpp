#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    cout << v.back() << endl; // v[v.size()-1]
    cout << v[0] << endl;     // v.front()
    cout << v.at(2) << endl;
    // vector<int>::iterator it; or auto
    for (auto it = v.begin(); it < v.end(); it++)
        cout << *it << " ";
    return 0;
}
