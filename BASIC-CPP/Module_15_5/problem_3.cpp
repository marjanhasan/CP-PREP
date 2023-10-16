/*
Question: Write a function named count_odd() which receives an array of integers
and the size of that array and counts the number of odd elements in that array
and returns that. Call that function in the main function and print the count there.
input:
5
1 5 4 10 2
output:
2
*/
#include <bits/stdc++.h>
using namespace std;
int count_odd(int *arr, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int res = count_odd(arr, n);
    cout << res;
    return 0;
}
