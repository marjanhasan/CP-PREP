//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        // code here
        int pre[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            int val = arr[i];
            pre[val]++;
        }
        int mis, rep;
        for (int i = 1; i <= n; i++)
        {
            if (pre[i] == 0)
                mis = i;
            else if (pre[i] > 1)
                rep = i;
        }
        return {rep, mis};

        // ***** confusing nibo na
        // vector<int> v(2,0);
        // for(int i=0;i<n;i++)
        // {
        //     int val = abs(arr[i]);
        //     if(arr[val-1] > 0) arr[val-1] = -arr[val-1];
        //     else v[0]=val;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(arr[i] > 0)
        //         v[1]=i+1;
        // }
        // return v;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends