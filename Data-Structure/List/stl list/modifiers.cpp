#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 50, 60};
    list<int> nl;
    nl = l;            // assign a list in another list
    l.push_back(40);   // tail e push kro
    l.push_front(200); // head e push kro
    for (int v : l)
        cout << v << " ";
    cout << endl;
    l.pop_back();  // delete at tail
    l.pop_front(); // delete at head

    // l.insert(next(l.begin(), 2), 500); type 1
    // l.insert(next(l.begin(), 2), {100, 200, 300}); type 2
    // l.insert(next(l.begin(), 1), nl.begin(), nl.end()); type 3

    // vector<int> v = {60, 70, 80};
    // l.insert(next(l.begin(), 1), v.begin(), v.end()); type 4

    // int arr[3] = {0, 1, 2};
    // l.insert(next(l.begin(), 1), arr, arr + 3); type 5

    // l.erase(next(l.begin(), 1)); type 1
    // l.erase(next(l.begin(), 2), next(l.begin(), 5)); type 2
    replace(l.begin(), l.end(), 30, 500); // jto gula 30 ase sob gula 500 diye replace hbe
    for (int v : l)
        cout << v << " ";
    cout << endl;
    // find
    auto it = find(l.begin(), l.end(), 60);
    if (it == l.end())
        cout << "Not found";
    else
        cout << "Found";
    return 0;
}
