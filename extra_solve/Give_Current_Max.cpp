
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks > b.marks)
            return false; // bam pashe boro thakle change kro
        else if (a.marks < b.marks)
            return true;
        else
        {
            if (a.roll < b.roll)
                return false;
            else
                return true;
        }
    }
};
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (n--)
    {
        string s;
        cin >> s;
        int r, m;
        cin >> r >> m;
        Student ob(s, r, m);
        pq.push(ob);
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            string s;
            cin >> s;
            int r, m;
            cin >> r >> m;
            Student ob(s, r, m);
            pq.push(ob);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << nl;
        }
        else if (x == 1)
        {
            if (pq.empty())
                cout << "Empty" << nl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << nl;
        }
        else if (x == 2)
        {
            if (pq.empty())
                cout << "Empty" << nl;
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << nl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << nl;
            }
        }
    }
    return 0;
}