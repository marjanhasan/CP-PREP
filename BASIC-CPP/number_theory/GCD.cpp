#include <bits/stdc++.h>
using namespace std;

// ******** non recursive solution
int gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

// ************recursive solutions

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

//********* one liner recursive
// int gcd(int a, int b)
// {
//     return b ? gcd(b, a % b) : a;
// }

int main()
{
    // for two number using built in function
    int num1, num2;
    cin >> num1 >> num2;
    cout << __gcd(num1, num2) << endl;

    // for more than one number
    vector<int> num = {12, 15, 18, 21, 24};
    int ans = 0;
    for (int i = 0; i < num.size(); i++)
        ans = __gcd(ans, num[i]);
    cout << ans << endl;

    return 0;
}
