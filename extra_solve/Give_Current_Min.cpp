#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
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

void delete_heap(vector<int> &v)
{
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
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    vector<int> v;
    ll n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        v.push_back(x);

        ll cur_idx = v.size() - 1;

        while (cur_idx != 0)
        {
            /* code */
            ll parent = (cur_idx - 1) / 2;
            if (v[parent] > v[cur_idx])
                swap(v[parent], v[cur_idx]);
            else
                break;
            cur_idx = parent;
        }
    }

    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            ll y;
            cin >> y;
            insert_heap(v, y);
            cout << v[0] << nl;
        }
        else if (x == 1)
        {
            if (v.empty())
                cout << "Empty" << nl;
            else
                cout << v[0] << nl;
        }
        else if (x == 2)
        {
            if (v.empty())
                cout << "Empty" << nl;
            else
            {
                delete_heap(v);
                if (v.empty())
                    cout << "Empty" << nl;
                else
                    cout << v[0] << nl;
            }
        }
    }
    return 0;
}