#include <bits/stdc++.h>
using namespace std;
/*
first way O(N*N)
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == target)
                    return true;
            }
        }
        return false;
    }
}; */

/*
second way O(N)
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int r = matrix.size(), c = 0;
        while (r >= 0 && c < matrix[0].size())
        {
            if (matrix[r][c] > target)
                r--;
            else if (matrix[r][c] < target)
                c++;
            else
            {
                return true;
            }
        }
        return false;
    }
}; */
class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            int row = mid / n, col = mid % n;
            if (matrix[row][col] == target)
                return true;
            if (matrix[row][col] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};
int main()
{
    int m, n;
    cin >> m >> n;
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];
    }
    int target;
    cin >> target;
    int rows = m, cols = n;
    int low = 0, high = rows * cols - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (matrix[mid / cols][mid % cols] == target)
        {
            cout << "YES";
            break;
        }
        else if (matrix[mid / cols][mid % cols] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << "NO";
    return 0;
}
