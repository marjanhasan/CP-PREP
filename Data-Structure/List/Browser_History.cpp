#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert(Node *&head, Node *&tail, string val)
{
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
Node *find(Node *head, string val)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == val)
            return tmp;
        tmp = tmp->next;
    }
    return tmp;
}
int main()
{
    Node *head = NULL, *tail = NULL;
    string s;
    while (cin >> s)
    {
        if (s == "end")
            break;
        insert(head, tail, s);
    }
    int q;
    cin >> q;
    Node *tmp;
    while (q--)
    {
        string op;
        cin >> op;
        if (op == "visit")
        {
            string f;
            cin >> f;
            Node *tmp2 = find(head, f);
            if (tmp2 != NULL)
            {
                tmp = tmp2;
                cout << tmp->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (op == "prev")
        {
            if (tmp != NULL && tmp->prev != NULL)
            {
                tmp = tmp->prev;
                cout << tmp->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else
        {
            if (tmp != NULL && tmp->next != NULL)
            {
                tmp = tmp->next;
                cout << tmp->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}
