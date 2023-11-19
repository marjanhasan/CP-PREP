#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];

    while (cin.getline(s, 100001))
    {
        int sz = strlen(s);
        // sorting using selection sort
        // for (int i = 0; i < sz - 1; i++)
        // {
        //     for (int j = i + 1; j < sz; j++)
        //     {
        //         if (s[j] < s[i])
        //             swap(s[j], s[i]);
        //     }
        // }

        // sorting using sort function
        sort(s, s + sz);
        for (int i = 0; i < sz; i++)
        {
            if (s[i] != ' ')
                cout << s[i];
        }
        cout << endl;
    }

    return 0;
}

/*
input:
monkey
i love flower

output:
ekmnoy
eefilloorvw

*/