#include <bits/stdc++.h>
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class Queue
{
public:
    Queue()
    {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/
    Node *head = NULL, *tail = NULL;
    int sz = 0;
    bool isEmpty()
    {
        // Implement the isEmpty() function
        return sz == 0;
    }

    void enqueue(int data)
    {
        // Implement the enqueue() function
        sz++;
        Node *newNode = new Node(data);
        if (!head)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    int dequeue()
    {
        // Implement the dequeue() function
        if (!head)
            return -1;
        sz--;
        int res = head->val;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return res;
    }

    int front()
    {
        // Implement the front() function
        if (!head)
            return -1;
        return head->val;
    }
};