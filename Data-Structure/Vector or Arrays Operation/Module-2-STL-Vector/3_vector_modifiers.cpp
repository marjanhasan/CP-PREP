#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> v2 = {10, 20, 30, 40};
    v = v2; // O(1)
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    vector<int> x = {10, 20, 30};
    vector<int> x1 = {1, 2, 3, 4, 5};
    x = x1; // O(N)
    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";
    cout << endl;
    vector<int> y = {1, 2, 3, 4, 5};
    vector<int> y1 = {10, 20, 40};
    y = y1; // O(N)
    for (int i = 0; i < y.size(); i++)
        cout << y[i] << " ";
    cout << endl;
    v.push_back(10);
    v.push_back(20);
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
