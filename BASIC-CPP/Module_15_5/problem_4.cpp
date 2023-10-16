/* Question: Make a function named change_it() which receives an array of integers and
the size of that integer. In the function you need to change the value of the last index
of that array and assign 100 there. You don’t need to return anything. After that print
the array in the main function and see if it is updated.
input:
5
10 20 30 40 50
output:
10 20 30 40 100
input:
3
1 2 3
output:
1 2 100
 */
#include <bits/stdc++.h>
using namespace std;
void change_it(int *arr, int n)
{
    arr[n - 1] = 100;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    change_it(arr, n);
    return 0;
}
