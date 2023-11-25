/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// normal mid approach
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *tmp = head;
        int sz = 0;
        while (tmp != NULL)
        {
            sz++;
            tmp = tmp->next;
        }
        int mid = sz / 2;
        tmp = head;
        for (int i = 1; i <= mid; i++)
            tmp = tmp->next;
        return tmp;
    }
};

// fast & slow approach
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};