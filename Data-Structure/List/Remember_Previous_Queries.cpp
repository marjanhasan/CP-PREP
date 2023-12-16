#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    int q;
    cin >> q;
    list<int> l;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            l.push_front(v);
        }
        else if (x == 1)
            l.push_back(v);
        else
        {
            if (!l.empty() && v < l.size())
                l.erase(next(l.begin(), v));
        }

        cout << "L -> ";
        for (auto d : l)
            cout << d << " ";
        cout << endl;
        cout << "R -> ";
        for (auto it = l.rbegin(); it != l.rend(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}
