class Solution
{
public:
    void insert_heap(vector<int> &v, int x)
    {
        v.push_back(x);
        int cur = v.size() - 1;

        while (cur != 0)
        {
            /* code */
            int pr = (cur - 1) / 2;
            if (v[pr] > v[cur])
                swap(v[pr], v[cur]);
            else
                break;
            cur = pr;
        }
    }
    vector<int> res;
    void delete_heap(vector<int> &v)
    {
        res.push_back(v[0]);
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
                if (v[left] <= v[right] && v[left] < v[cur])
                {
                    swap(v[left], v[cur]);
                    cur = left;
                }
                else if (v[right] <= v[left] && v[right] < v[cur])
                {
                    swap(v[right], v[cur]);
                    cur = right;
                }
                else
                    break;
            }
            else if (left <= last)
            {
                if (v[left] < v[cur])
                {
                    swap(v[left], v[cur]);
                    cur = left;
                }
                else
                    break;
            }
            else if (right <= last)
            {
                if (v[right] < v[cur])
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
    }
    vector<int> sortArray(vector<int> &nums)
    {
        vector<int> v;
        for (int val : nums)
            insert_heap(v, val);
        while (!v.empty())
        {
            delete_heap(v);
        }
        return res;
    }
};