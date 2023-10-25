//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function template for C++

class Solution
{
public:
    // A binary search based recursive function that returns
    // the missing element in arithmetic progression
    /*
        // using deivide and conquer
        int findMissingUtil(int arr[], int low, int high, int diff)
        {
            if (high <= low)
                return INT_MAX;

            int mid = low + (high - low) / 2;

            // The element just after the middle element is missing.
            // The arr[mid+1] must exist, because we return when
            // (low == high) and take floor of (high-low)/2
            if (arr[mid + 1] - arr[mid] != diff)
                return (arr[mid] + diff);

            // The element just before mid is missing
            if (mid > 0 && arr[mid] - arr[mid - 1] != diff)
                return (arr[mid - 1] + diff);

            // If the elements till mid follow AP, then recur
            // for right half
            if (arr[mid] == arr[0] + mid * diff)
                return findMissingUtil(arr, mid + 1, high, diff);

            // Else recur for left half
            return findMissingUtil(arr, low, mid - 1, diff);
        }

        int findMissing(int arr[], int n)
        {
            int diff = (arr[n - 1] - arr[0]) / n;
            return findMissingUtil(arr, 0, n - 1, diff);
        } */

    int findMissing(int arr[], int n)
    {
        // code here first way O(N)
        int dif = (arr[n - 1] - arr[0]) / n;
        for (int i = 0; i < n - 1; i++)
        {
            int sol = arr[i + 1] - arr[i];
            if (sol != dif)
                return arr[i] + dif;
        }

        // ******another way O(logN)
        int d = (arr[n - 1] - arr[0]) / n;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (arr[mid + 1] - arr[mid] != d)
                return arr[mid] + d;
            if (arr[mid] - arr[mid - 1] != d)
                return arr[mid - 1] + d;

            if (mid > 0 && arr[mid] - arr[0] != mid * d)
                r = mid - 1;
            else
                l = mid + 1;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends