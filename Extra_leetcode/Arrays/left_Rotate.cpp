#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    k %= v.size();
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
    reverse(v.begin(), v.end());
    for (int a : v)
        cout << a << " ";

    return 0;
}
/*
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:

    //Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(int arr[], int d, int n){
        // code here
        d %= n;
        int l=0,r=d-1;
        while(l<r)
        {
            swap(arr[l],arr[r]);
            l++;r--;
        }
        l=d,r=n-1;
        while(l<r)
        {
            swap(arr[l],arr[r]);
            l++;r--;
        }
        l=0,r=n-1;
        while(l<r)
        {
            swap(arr[l],arr[r]);
            l++;r--;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    //taking testcases
    cin >> t;

    while(t--){
        int n, d;

        //input n and d
        cin >> n >> d;

        int arr[n];

        //inserting elements in the array
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        Solution ob;
        //calling rotateArr() function
        ob.rotateArr(arr, d,n);

        //printing the elements of the array
        for(int i =0;i<n;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
 */