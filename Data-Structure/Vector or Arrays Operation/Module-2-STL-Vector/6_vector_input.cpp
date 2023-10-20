#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
    type 1:

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    for (int val : v)
        cout << val << " ";
    cout<<endl; */

    // type 2
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int val : v)
        cout << val << " ";
    return 0;
}
