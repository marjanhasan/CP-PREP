class Solution
{
public:
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
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *mHead = NULL;
        ListNode *mtail = NULL;
        ListNode *tmp = head;
        int sum = 0;
        while (tmp != NULL)
        {
            if (tmp->val > 0)
                sum += tmp->val;
            if (tmp->val == 0 && sum > 0)
            {
                insert(mHead, mtail, sum);
                sum = 0;
            }
            tmp = tmp->next;
        }
        return mHead;
    }
};