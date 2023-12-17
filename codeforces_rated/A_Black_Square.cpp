/*
// not preferable
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    int fre[5] = {0};
    string s;
    cin >> s;
    for (char c : s)
    {
        int val = (c - '0');
        fre[val]++;
    }
    int sum = 0;
    for (int i = 1; i < 5; i++)
    {
        if (fre[i] > 0)
            sum = sum + (fre[i] * a[i - 1]);
    }
    cout << sum;
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    string s;
    cin >> s;
    int sum = 0;
    for (char c : s)
    {
        int val = c - '0';
        sum += a[val - 1];
    }
    cout << sum;
    return 0;
}
