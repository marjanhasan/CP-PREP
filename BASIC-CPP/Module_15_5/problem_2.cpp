/*
Question: Write a function named my_len() which receives a string as a parameter
and then counts the length of that string and returns that count.
Don’t use strlen() function to get the length of the string.
After receiving that count in the main function print it.
Note: The string will not have any spaces.
input: hello
output: 5
*/
#include <bits/stdc++.h>
using namespace std;
int my_len()
{
    char a;
    int cnt = 0;
    while (cin >> a)
        cnt++;
    return cnt;
}
int main()
{
    int res = my_len();
    cout << res;
    return 0;
}
