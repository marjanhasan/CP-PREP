#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    // cout << v.max_size() << endl; 2305843009213693951
    // v.push_back(10);
    // cout << v.capacity() << endl; // capacity 0,2,4,8 evabe bare
    v = {20, 30, 40, 50};
    // v.clear(); // value clear kre dey but delete kre na,v[0] te value thake
    v.resize(2);
    v.resize(7, 0);
    v.resize(9, 10);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    cout << v[0];
    return 0;
}
