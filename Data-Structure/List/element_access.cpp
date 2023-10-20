#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50};
    cout << l.front() << " " << *next(l.begin(), 3) << " " << l.back();
    return 0;
}
