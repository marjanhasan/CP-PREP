#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n + 1];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int ans = 0;
    // o(N^2) solution
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //         ans += (ar[i] ^ ar[j]);
    // }

    // Iterate through each bit position (0 to 30, since int is 32 bits)
    for (int i = 0; i < 31; i++)
    {
        int one = 0, zero = 0;

        // Count the number of elements with the i'th bit set and unset
        for (int j = 0; j < n; j++)
        {
            if (ar[j] & (1 << i))
                one++;
            else
                zero++;
        }

        // Calculate the count of pairs with i'th bit set and unset
        int p = one * zero;

        // Update the answer with the XOR of pairs having the i'th bit set
        ans += (1 << i) * p;
    }

    // Print the final result
    cout << ans << endl;

    return 0;
}
