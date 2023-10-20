#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30};
    // cout << l.max_size() << endl; // max size dekhay
    // l.clear();
    // cout << l.size() << endl; // clear hway zero dekhabe
    l.resize(2);
    cout << l.size() << endl;
    l.resize(5);
    cout << l.size() << endl;
    l.resize(7, 5);
    for (int v : l)
        cout << v << " ";
    return 0;
}
