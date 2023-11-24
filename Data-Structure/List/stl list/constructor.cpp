#include <bits/stdc++.h>
using namespace std;
int main()
{
    // initialisation

    // list<int> l; type 1
    // list<int> l(10); type 2 sob value zero
    // list<int> l(10, 5); // type 3 sob value 5
    // cout << l.size() << " " << l.front();
    list<int> l2 = {1, 2, 3, 4, 5};
    // list<int> l(l2); // type 3 l2 copy kre felbe
    int arr[5] = {10, 20, 30, 40, 50};
    // list<int> l(arr, arr + 5); // type 4 arr copy kre felbe
    vector<int> v = {100, 200, 300, 400};
    list<int> l(v.begin(), v.end()); // type 5 arr er mto shurur pointer and sesh pointer lage
    // long cut
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    // short cut
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}
