#include <bits/stdc++.h>
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

void insert(Node *&head, Node *&tail, int val)
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
void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
    swap(i->val, j->val);
}

// using two pointers technique o(N)
bool isPalindrome(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i->val != j->val)
            return false;
        i = i->next;
        j = j->prev;
    }
    if (i->val != j->val)
        return false;

    return true;
}

// comparing duplicate reverse list way o(2N)
bool isPalindrome_2nd(Node *head, Node *tail)
{
    Node *head2 = NULL;
    Node *tail2 = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        insert(head2, tail2, tmp->val);
        tmp = tmp->next;
    }
    reverse(head2, tail2);
    Node *tmp1 = head;
    Node *tmp2 = head2;
    while (tmp1 != NULL)
    {
        if (tmp1->val != tmp2->val)
            return false;
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return true;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert(head, tail, val);
    }
    isPalindrome(head, tail) ? cout << "YES\n" : cout << "NO\n";
    isPalindrome_2nd(head, tail) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}
