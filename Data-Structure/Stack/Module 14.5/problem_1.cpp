/* Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL to solve this problem. */
/* #include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    myStack st1;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    myStack st2;
    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    bool flag = false;

    if (st1.size() != st2.size())
    {
        cout << "NO";
        return 0;
    }

    while (!st1.empty())
    {
        if (st1.top() != st2.top())
        {
            flag = true;
            break;
        }
        st1.pop();
        st2.pop();
    }

    flag ? cout << "NO" : cout << "YES";
    return 0;
}
 */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    stack<int> st1;
    while (n--)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    stack<int> st2;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    st1 == st2 ? cout << "YES" : cout << "NO";

    return 0;
}
