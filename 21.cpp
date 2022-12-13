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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (!list1)
            return list2;
        if (!list2)
            return list1;
        ListNode *ptr = list1;
        if (list1->val < list2->val)
        {
            list1 = list1->next;
        }
        else
        {
            ptr = list2;
            list2 = list2->next;
        }
        ListNode *curr = ptr;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                curr->next = list1;
                curr = list1;
                list1 = list1->next;
            }
            else
            {
                curr->next = list2;
                curr = list2;
                list2 = list2->next;
            }
        }
        if (!list1)
            curr->next = list2;
        else
            curr->next = list1;
        return ptr;
    }
};