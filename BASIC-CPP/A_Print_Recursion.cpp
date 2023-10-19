#include <bits/stdc++.h>
using namespace std;
void recursion(int n)
{
    if (n == 0)
        return;
    recursion(n - 1);
    cout << "I love Recursion\n";
}
int main()
{
    int n;
    cin >> n;
    recursion(n);
    return 0;
}
