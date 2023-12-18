#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;
    mp.insert({"sakib", 75}); // type 1
    cout << mp["sakib"] << endl;
    // most practice way to insert type 2
    mp["rakib"] = 17;                                // O(logN)
    for (auto it = mp.begin(); it != mp.end(); it++) // O(NlogN)
    {
        cout << it->first << " " << it->second << endl; // O(logN)
    }
    if (mp.count("Sakib"))
        cout << "Ase";
    else
        cout << "Nai";
    return 0;
}
