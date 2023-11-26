// first way

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
    ListNode *swapNodes(ListNode *head, int k)
    {
        int sz = size(head);
        int lastPos = sz - k + 1;
        ListNode *leftTmp = head;
        ListNode *rightTmp = head;
        ListNode *tmp = head;
        for (int i = 1; i <= sz; i++)
        {
            if (k == i)
                leftTmp = tmp;
            if (lastPos == i)
                rightTmp = tmp;
            tmp = tmp->next;
        }
        swap(leftTmp->val, rightTmp->val);
        return head;
    }
};

/*
// second way

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
    void swapHead(ListNode *head, int pos)
    {
        ListNode *tmp = head;
        for (int i = 1; i <= pos; i++)
            tmp = tmp->next;
        swap(head->val, tmp->val);
    }
    void swapNode(ListNode *head, int fp, int lp)
    {
        ListNode *tmp = head;
        for (int i = 1; i <= fp - 1; i++)
            tmp = tmp->next;
        ListNode *fn = tmp;
        tmp = head;
        for (int i = 1; i <= lp; i++)
            tmp = tmp->next;
        swap(fn->val, tmp->val);
    }
    ListNode *swapNodes(ListNode *head, int k)
    {
        int sz = size(head);
        int lastPos = sz - k;
        if (k == 1)
            swapHead(head, lastPos);
        else
            swapNode(head, k, lastPos);
        return head;
    }
};
 */
