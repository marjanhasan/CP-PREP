class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    void del_head(ListNode *&head)
    {
        ListNode *deleteNode = head;
        head = head->next;
        delete deleteNode;
    }
    void del_pos(ListNode *head, int pos)
    {
        ListNode *tmp = head;
        for (int i = 1; i <= pos - 1; i++)
            tmp = tmp->next;
        ListNode *deleteNode = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        int sz = size(head);
        int pos = sz - n;
        if (pos == 0)
        {
            del_head(head);
        }
        else
        {
            del_pos(head, pos);
        }
        return head;
    }
};