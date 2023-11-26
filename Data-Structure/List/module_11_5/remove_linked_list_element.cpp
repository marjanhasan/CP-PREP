class Solution
{
public:
    void del_head(ListNode *&head)
    {
        ListNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    void del_node(ListNode *head, int pos)
    {
        ListNode *tmp = head;
        for (int i = 1; i <= pos - 1; i++)
            tmp = tmp->next;
        ListNode *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *tmp = head;
        int pos = 0;
        while (tmp != NULL)
        {
            if (tmp->val == val && pos == 0)
            {
                del_head(head);
                tmp = head;
            }
            else if (tmp->val == val)
            {
                del_node(head, pos);
                tmp = head;
                pos = 0;
            }
            else
            {
                tmp = tmp->next;
                pos++;
            }
        }
        return head;
    }
};