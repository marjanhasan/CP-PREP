//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*
*******************naive approach***************
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // code here
        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                x++;
            else if (a[i] == 1)
                y++;
            else
                z++;
        }
        for (int i = 0; i < n; i++)
        {
            if (x > 0)
            {
                a[i] = 0;
                x--;
            }
            else if (y > 0)
            {
                a[i] = 1;
                y--;
            }
            else
            {
                a[i] = 2;
                z--;
            }
        }
    }
}; */
//{ Driver Code Starts

// } Driver Code Ends

// *********************************optimal approach
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // code here
        int x = 0, y = 0, z = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                x++;
            else if (a[i] == 1)
                y++;
            else
                z++;
        }
        for (int i = 0; i < n; i++)
        {
            if (x > 0)
            {
                a[i] = 0;
                x--;
            }
            else if (y > 0)
            {
                a[i] = 1;
                y--;
            }
            else
            {
                a[i] = 2;
                z--;
            }
        }
    }
};

// } Driver Code Ends
//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends