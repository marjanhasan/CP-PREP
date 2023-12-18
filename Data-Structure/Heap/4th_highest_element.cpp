#include <bits/stdc++.h>
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;

    while (cur_idx != 0)
    {
        /* code */
        int parent = (cur_idx - 1) / 2;
        if (v[parent] < v[cur_idx])
            swap(v[parent], v[cur_idx]);
        else
            break;
        cur_idx = parent;
    }
}
int delete_heap(vector<int> &v)
{
    int res = v[0];
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while (true)
    {
        int left = (cur * 2) + 1;
        int right = (cur * 2) + 2;
        int last = v.size() - 1;
        if (left <= last && right <= last)
        {
            if (v[left] >= v[right] && v[left] > v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else if (v[right] >= v[left] && v[right] > v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else
                break;
        }
        else if (left <= last)
        {
            if (v[left] > v[cur])
            {
                swap(v[left], v[cur]);
                cur = left;
            }
            else
                break;
        }
        else if (right <= last)
        {
            if (v[right] > v[cur])
            {
                swap(v[right], v[cur]);
                cur = right;
            }
            else
                break;
        }
        else
            break;
    }
    return res;
}
int getFourthLargest(int arr[], int n)
{
    // Write your code here.
    vector<int> v;
    for (int i = 0; i < n; i++)
        insert_heap(v, arr[i]);
    int fourth = 4;
    bool flag = false;
    int res;
    while (fourth--)
    {
        if (v.empty())
        {
            flag = true;
            break;
        }
        res = delete_heap(v);
    }
    if (flag)
        return INT_MIN;
    else
        return res;
}