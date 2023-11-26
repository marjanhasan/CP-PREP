class Solution
{
public:
    void reverse(ListNode *&head, ListNode *node)
    {
        if (node->next == NULL)
        {
            head = node;
            return;
        }
        reverse(head, node->next);
        node->next->next = node;
        node->next = NULL;
    }
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL)
            return head;
        reverse(head, head);
        return head;
    }
};