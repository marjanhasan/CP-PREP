#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 60, 20, 10, 30, 10};
    // l.remove(10); // jto gula 10 so remove

    // l.sort(); // ascending order
    // l.sort(greater<int>()); // descending order

    // unique krar way
    // l.sort();
    // l.sort(greater<int>());
    // l.unique(); // sort kre nitei hbe

    l.reverse();
    for (int v : l)
        cout << v << " ";

    cout << *next(l.begin(), 2) << endl;
    cout << l.front() << endl;
    cout << l.back() << endl;
    return 0;
}
