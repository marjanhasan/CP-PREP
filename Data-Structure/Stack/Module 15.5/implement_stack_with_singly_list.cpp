#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack
{
    // Write your code here

public:
    Node *head;
    Node *tail;
    int sz;
    Stack()
    {
        // Write your code here
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    int getSize()
    {
        // Write your code here
        return sz;
    }

    bool isEmpty()
    {
        // Write your code here
        return sz == 0;
    }

    void push(int data)
    {
        // Write your code here
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop()
    {
        // Write your code here
        if (sz == 0)
            return;
        sz--;
        Node *deleteNode = tail;
        Node *tmp = head;
        for (int i = 1; i <= sz - 1; i++)
            tmp = tmp->next;
        tail = tmp;
        tail->next = NULL;
        delete deleteNode;
    }

    int getTop()
    {
        // Write your code here
        if (sz != 0)
            return tail->data;
        else
            return -1;
    }
};
int main()
{

    return 0;
}
