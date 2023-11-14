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
    int num1, num2;
    cin >> num1 >> num2;

    while (num2)
    {
        num1 %= num2;
        swap(num1, num2);
    }
    cout << num1;

    return 0;
}
