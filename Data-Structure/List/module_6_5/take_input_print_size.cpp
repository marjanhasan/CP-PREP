#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    list<int> l;
    while (n--)
    {
        int v;
        cin >> v;
        l.push_back(v);
    }
    cout << l.size() << endl;
    return 0;
}
