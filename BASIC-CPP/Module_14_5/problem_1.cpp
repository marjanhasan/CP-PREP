/* Question: Take a positive integer N as input and
print the pattern shown in the sample input output.
input:
5
output:
    *
   **
  ***
 ****
*****

input:
7
output:
      *
     **
    ***
   ****
  *****
 ******
*******

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s = n - 1, k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= s; i++)
            cout << " ";
        for (int i = 1; i <= k; i++)
            cout << "*";
        cout << endl;
        s--;
        k++;
    }
    return 0;
}
