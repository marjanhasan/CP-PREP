/*
Question: Write a function named my_abs() that receives an integer value as parameter
and returns the absolute value of that. Absolute value means if the value is negative it
will be converted to positive value. Then print the value in the main function.
input: 5
output: 5
input: -7
output: 7
*/
#include <bits/stdc++.h>
using namespace std;
int my_abs(int n)
{
    if (n < 0)
        return n *= -1;
    else
        return n;
}
int main()
{
    int n;
    cin >> n;
    int res = my_abs(n);
    cout << res;
    return 0;
}
