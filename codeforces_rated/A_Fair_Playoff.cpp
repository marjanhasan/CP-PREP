/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> v(4);
        for(int i = 0; i < 4; i++)
            cin >> v[i];
        int mnw = min(max(v[0], v[1]), max(v[2], v[3]));
        int mxl = max(min(v[0], v[1]), min(v[2], v[3]));
        cout << (mnw > mxl ? "YES" : "NO") << endl;
    }

    return 0;
}
