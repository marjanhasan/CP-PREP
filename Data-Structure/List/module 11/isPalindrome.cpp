class Solution
{
public:
    void reverse(ListNode *&head, ListNode *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    void insert(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    bool isPalindrome(ListNode *head)
    {
        ListNode *tmp = head;
        ListNode *head2 = NULL;
        ListNode *tail2 = NULL;
        while (tmp != NULL)
        {
            insert(head2, tail2, tmp->val);
            tmp = tmp->next;
        }
        reverse(head2, head2);
        tmp = head;
        ListNode *tmp2 = head2;
        while (tmp != NULL)
        {
            if (tmp->val != tmp2->val)
                return false;
            tmp = tmp->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
};