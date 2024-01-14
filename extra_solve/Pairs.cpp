#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'

class cmp
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    }
};
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    map<string, int> mp;
    priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;
    while (n--)
    {
        string x;
        cin >> x;
        int y;
        cin >> y;
        pq.push({x, y});
    }

    while (!pq.empty())
    {
        cout << pq.top().first << " " << pq.top().second << nl;
        pq.pop();
    }
    return 0;
}