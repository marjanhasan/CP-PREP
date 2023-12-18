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
class MyLinkedList
{
public:
    Node *head = NULL, *tail = NULL;
    int sz = 0;
    MyLinkedList()
    {
    }

    int get(int index)
    {
        if (index >= sz)
            return -1;
        if (head == NULL)
            return -1;
        Node *tmp = head;
        while (tmp != NULL && index)
        {
            tmp = tmp->next;
            index--;
        }
        return tmp->val;
    }

    void addAtHead(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void addAtIndex(int index, int val)
    {
        if (index > sz)
            return;
        if (index == sz)
        {
            addAtTail(val);
            return;
        }
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        sz++;
        Node *tmp = head;
        index--;
        while (tmp != NULL && index)
        {
            tmp = tmp->next;
            index--;
        }
        Node *newNode = new Node(val);
        newNode->next = tmp->next;
        tmp->next = newNode;
    }

    void deleteAtIndex(int index)
    {
        if (index >= sz)
            return;
        sz--;
        if (index == 0)
        {
            Node *deleteNode = head;
            head = head->next;
            delete deleteNode;
            if (head == NULL || head->next == NULL)
                tail = head;
            return;
        }
        index--;
        Node *tmp = head;
        while (tmp != NULL && index)
        {
            tmp = tmp->next;
            index--;
        }
        Node *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
        if (tmp->next == NULL)
        {
            tail = tmp;
        }
    }
};
