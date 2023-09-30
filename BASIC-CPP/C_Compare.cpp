#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    a < b ? cout << a : cout << b;
    return 0;
}

/*
// another way

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int sz1 = a.size();
    int sz2 = b.size();
    int size = min(sz1, sz2);
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < b[i])
        {
            cout << a << endl;
            flag = 0;
            break;
        }
        else if (b[i] < a[i])
        {
            cout << b << endl;
            flag = 0;
            break;
        }
        else
        {
            flag = -1;
        }
    }
    if (flag == -1)
    {
        if (sz1 > sz2)
        {
            cout << b << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
}
 */