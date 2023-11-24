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
bool cycle_detection(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    // Node *c = new Node(40);
    Node *tail = b;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = b;
    // b->next = c;
    // c->prev = b;
    // c->next = c;
    cycle_detection(head) ? cout << "Cycle Detected\n" : cout << "No Cycle Detected\n";
    return 0;
}
